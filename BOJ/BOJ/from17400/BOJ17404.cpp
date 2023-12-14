// https://www.acmicpc.net/problem/17404 BOJ 17404 RGB�Ÿ� 2 2023-12-14
/*
Ǯ�� ���� �����ϰ� �ٽ� ���� �װ� �������� �ۼ��� �ڵ�. ������ڸ� ���� ���� Ǭ �ڵ�� :D

����� ���� ���� ���� ���� ������ ��, �� �� ���� ����Ʈ�� ������ �ȵȴٴ� ���̴�.
�� �����غ��� ������ �������� ù��° ���� ���� ������ �������ָ� �ȴ�.

���� rgb, �� ���� 0,1,2 ��° ���̶�� �Ѵ�.
ù��° ���� 0�̶�� ĥ���� �� �ι�° ���� 1, 2�� ĥ���� �� �ִ�.
���� �ι�° ���� 1, 2�� ĥ�������� ����° ���� 0���� ĥ������ �Ѵ�.
���� ����° ���� 1�� ĥ�����ٸ� �ι�° ���� 2�θ� ĥ���� �� ���� ���̴�.
ó������ ���� ���� ����� �߾��µ�, �� �ʿ� ���� ����̴�.
�ֳ��ϸ� �ᱹ�� ������ ���� ����ؾ� �ϴ� ���� ������ ���� ĥ�ϰ� ������ ����ϸ� �Ǳ� �����̴�.

������ �� ���� dp�� ���� ������ ����� ������ �� ������ ���� 0�� ���̶�� ù��° ���� 1,2 �� ���̿��� �ϰ�,
1�� ���̸� ù��° ���� 0, 2 �� ���̿��� �Ѵ�.
ù��° ���� 0~2�� �� �� �ϳ��� �̸� ���ص� ���¿��� dp �� �����µ�,
�Ϲ����� dp���� ������ ���� memo �� �ּ� ���� ���� �������� ���⼱ ù��° ���� ����ؾ� �ϹǷ�
ù��° ���� 0�� ���̸� ������ ���� 0�� ������ ĥ������ ���� �ּ� ������ �����ϸ� �ȴ�.
*/
#include <iostream>
#include <cmath>

using namespace std;

int cost[1000][3], memo[1000][3];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

	int max_value = 1000 * 1000 + 1;
	int result = max_value;
	for (int i = 0; i < 3; i++) { // ù��° ���� ���� ���Ѵ�.
		int tmp_result = max_value;
		for (int k = 0; k < 3; k++) { // ù��° ���� ���� ���������Ƿ� ������ ���� max_value �� �ʱ�ȭ
			if (k == i)
				memo[0][k] = cost[0][k];
			else
				memo[0][k] = max_value;
		}

		for (int k = 1; k < n; k++) { // dp�� ä���.
			// n��° ���� 0������ ĥ������ �ּҺ����
			// n-1 ��° ���� 1������ ĥ������ �ּҺ���
			// n-1 ��° ���� 2������ ĥ������ �ּҺ���� �ּҰ���
			// n��° ���� 0������ ä��� ����� ���� ���̴�.
			memo[k][0] = min(memo[k - 1][1], memo[k - 1][2]) + cost[k][0];
			memo[k][1] = min(memo[k - 1][0], memo[k - 1][2]) + cost[k][1];
			memo[k][2] = min(memo[k - 1][0], memo[k - 1][1]) + cost[k][2];
		}

		for (int k = 0; k < 3; k++) { // ������ ���� ����� Ȯ���Ѵ�.
			// ���������� 0~2�� ��(k)���� ĥ�� �ּ� ����� ���ϵ�,
			// �� ���� ù��° ���� ��(i)�� ���ٸ� �ѱ��, ���� �ʴٸ� �ּҰ��� ����Ѵ�.
			if (k != i) {
				result = min(result, memo[n - 1][k]);
			}
		}
	}
	cout << result;
}



/*
3
26 40 83
49 60 57
13 89 99

3
10 5 10
5 10 10
10 5 10


*/

/*
dfs �� Ǯ���ٰ� 45% ���� �ð��ʰ� ���� �ڵ�
*/
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int m, mins[1000], colors[1000][3], n, first_selected;
//
//void dfs(int idx, int before_value, int selected) {
//	if (n == idx)
//		return;
//
//	for (int i = 0; i < 3; i++) {
//		if (idx == n - 1 && first_selected == i) continue;
//		if (selected == i) continue;
//
//		if (mins[idx] != 0) 
//			mins[idx] = min(mins[idx], before_value + colors[idx][i]);
//		else
//			mins[idx] = before_value + colors[idx][i];
//		if (idx == 0) first_selected = i;
//
//		dfs(idx + 1, before_value + colors[idx][i], i);
//	}
//}
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int r, g, b;
//		cin >> r >> g >> b;
//		colors[i][0] = r;
//		colors[i][1] = g;
//		colors[i][2] = b;
//	}
//
//	dfs(0, 0, -1);
//
//	cout << mins[n - 1];
//}