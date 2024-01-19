// https://www.acmicpc.net/problem/14890 BOJ 14890 경사로 2024-01-19
/*
문제 풀이
1. 한 줄을 쭉 읽는다.
2. 같은 층 수를 기록한다.(part 배열)
2-1. 이전 층을 기준으로 현재 층이 더 높으면 양수, 낮으면 음수로 기록하고, 절대값은 그 층의 길이이다. 첫 번째 칸은 무조건 양수로 한다.
2-2. 1 1 2 2 3 3 이라면 2 2 2 로 기록한다.
2-3. 2 2 1 1 2 2 라면 2 -2 2 로 기록한다.
2-4. 1 2 2 2 3 2 라면 1 3 1 -1 로 기록한다.
3. part[0] 부터 순회한다. 이후 part[1] 부터 읽는다.
4. 층의 고저차에 따라 경사로를 놓을 수 있는지 검사한다.
4-1. 층이 높은 경우 이전 층에 경사로 길이 만큼의 공간이 남아있는지 확인
4-2. 층이 낮은 경우 현재 층에 경사로 길이만큼의 공간을 제거

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
		// j = 0 : 가로 j = 1 : 세로줄
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
				// 한 줄 쭉 계산하기
				if (before == -1) {
					before = target;
					count = 1;
					continue;
				}

				// 동일한 층일 경우
				if (before == target) {
					++count;
				}
				// 다른 층일 경우
				else {
					int difference = target - before;
					int absDifference = abs(difference);
					// 차이가 2 이상일 경우
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
				// 올라오는 경우
				if (part[k] > 0) {
					// 경사로 길이 만큼의 공간이 있는지 확인
					if (now < L) {
						elevatable = false;
						break;
					}
					now = part[k];
				}
				// 내려오는 경우
				else {
					// 경사로 공간 만큼의 길이를 현재 층에서 제거
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