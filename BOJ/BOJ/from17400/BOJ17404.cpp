// https://www.acmicpc.net/problem/17404 BOJ 17404 RGB거리 2 2023-12-14
/*
풀이 보고 이해하고 다시 내가 그걸 바탕으로 작성한 코드. 요약하자면 정답 보고 푼 코드다 :D

어려운 점은 집의 왼쪽 집과 오른쪽 집, 즉 양 옆의 페인트가 같으면 안된다는 점이다.
잘 생각해보면 마지막 집에서만 첫번째 집이 무슨 색인지 생각해주면 된다.

색은 rgb, 각 색을 0,1,2 번째 색이라고 한다.
첫번째 집이 0이라고 칠했을 때 두번째 집은 1, 2로 칠해질 수 있다.
물론 두번째 집이 1, 2로 칠해지려면 세번째 집은 0으로 칠해져야 한다.
만약 세번째 집이 1로 칠해진다면 두번째 집은 2로만 칠해질 수 있을 것이다.
처음에는 위와 같은 고민을 했었는데, 다 필요 없는 고민이다.
왜냐하면 결국에 오른쪽 집을 고려해야 하는 때는 마지막 집을 칠하고 나서만 고려하면 되기 때문이다.

마지막 집 까지 dp를 통해 최적의 비용을 구했을 때 마지막 집이 0번 색이라면 첫번째 집은 1,2 번 색이여야 하고,
1번 색이면 첫번째 집은 0, 2 번 색이여야 한다.
첫번째 집의 0~2번 색 중 하나로 미리 정해둔 상태에서 dp 를 돌리는데,
일반적인 dp에선 마지막 집의 memo 중 최소 값이 답이 될테지만 여기선 첫번째 집을 고려해야 하므로
첫번째 집이 0번 색이면 마지막 집이 0번 색으로 칠해지는 경우는 최소 값에서 제외하면 된다.
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
	for (int i = 0; i < 3; i++) { // 첫번째 집의 색을 정한다.
		int tmp_result = max_value;
		for (int k = 0; k < 3; k++) { // 첫번째 집의 색이 정해졌으므로 나머지 색은 max_value 로 초기화
			if (k == i)
				memo[0][k] = cost[0][k];
			else
				memo[0][k] = max_value;
		}

		for (int k = 1; k < n; k++) { // dp를 채운다.
			// n번째 집이 0번으로 칠해지는 최소비용은
			// n-1 번째 집이 1번으로 칠해지는 최소비용과
			// n-1 번째 집이 2번으로 칠해지는 최소비용의 최소값에
			// n번째 집을 0번으로 채우는 비용을 더한 값이다.
			memo[k][0] = min(memo[k - 1][1], memo[k - 1][2]) + cost[k][0];
			memo[k][1] = min(memo[k - 1][0], memo[k - 1][2]) + cost[k][1];
			memo[k][2] = min(memo[k - 1][0], memo[k - 1][1]) + cost[k][2];
		}

		for (int k = 0; k < 3; k++) { // 마지막 집의 결과만 확인한다.
			// 마지막집이 0~2번 색(k)으로 칠한 최소 비용을 구하되,
			// 그 색이 첫번째 집의 색(i)과 같다면 넘기고, 같지 않다면 최소값을 계산한다.
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
dfs 로 풀려다가 45% 에서 시간초과 나는 코드
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