// https://www.acmicpc.net/problem/14890 BOJ 14890 ���� 2024-01-19
/*
���� Ǯ��
1. �� ���� �� �д´�.
2. ���� �� ���� ����Ѵ�.(part �迭)
2-1. ���� ���� �������� ���� ���� �� ������ ���, ������ ������ ����ϰ�, ���밪�� �� ���� �����̴�. ù ��° ĭ�� ������ ����� �Ѵ�.
2-2. 1 1 2 2 3 3 �̶�� 2 2 2 �� ����Ѵ�.
2-3. 2 2 1 1 2 2 ��� 2 -2 2 �� ����Ѵ�.
2-4. 1 2 2 2 3 2 ��� 1 3 1 -1 �� ����Ѵ�.
3. part[0] ���� ��ȸ�Ѵ�. ���� part[1] ���� �д´�.
4. ���� �������� ���� ���θ� ���� �� �ִ��� �˻��Ѵ�.
4-1. ���� ���� ��� ���� ���� ���� ���� ��ŭ�� ������ �����ִ��� Ȯ��
4-2. ���� ���� ��� ���� ���� ���� ���̸�ŭ�� ������ ����

*/
#include <iostream>
#include <cmath>

using namespace std;

int N, L;
int board[100][100];
int part[100];

int main() {
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}

	int result = 0;
	for (int i = 0; i < N; i++) {
		// j = 0 : ���� j = 1 : ������
		for (int j = 0; j < 2; j++) {
			fill(part, part + 100, 0);
			int partIndex = 0;
			int count = 0;
			int before = -1;
			part[partIndex] = 1;

			bool elevatable = true;

			for (int k = 0; k < N; k++) {
				int target = board[i][k];
				if (j == 1) {
					target = board[k][i];
				}
				// �� �� �� ����ϱ�
				if (before == -1) {
					before = target;
					count = 1;
					continue;
				}

				// ������ ���� ���
				if (before == target) {
					++count;
				}
				// �ٸ� ���� ���
				else {
					int difference = target - before;
					int absDifference = abs(difference);
					// ���̰� 2 �̻��� ���
					if (absDifference >= 2) {
						elevatable = false;
						break;
					}

					part[partIndex + 1] = difference / absDifference;
					part[partIndex++] *= count;
					before = target;
					count = 1;
				}
			}
			part[partIndex++] *= count;

			int now = part[0];
			for (int k = 1; k < partIndex; k++) {
				// �ö���� ���
				if (part[k] > 0) {
					// ���� ���� ��ŭ�� ������ �ִ��� Ȯ��
					if (now < L) {
						elevatable = false;
						break;
					}
					now = part[k];
				}
				// �������� ���
				else {
					// ���� ���� ��ŭ�� ���̸� ���� ������ ����
					now = abs(part[k]) - L;
					if (now < 0) {
						elevatable = false;
						break;
					}
				}
			}

			if (elevatable) {
				++result;
			}
		}
	}
	cout << result;
}

/*
6 2
3 3 3 3 3 3
2 3 3 3 3 3
2 2 2 3 2 3
1 1 1 2 2 2
6 6 6 5 5 5
1 2 3 4 5 6


*/