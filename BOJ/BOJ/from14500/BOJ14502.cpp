// https://www.acmicpc.net/problem/14502 BOJ 14502 연구소 2023-12-28
#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

using namespace std;

int N, M;
int board[8][8];
bool selected_board[8][8];
int temp_board[8][8];
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int result = 8 * 8 + 1;
vector<pair<int, int>> viruses;

void dfs(int latest_wall_y, int latest_wall_x, int count) {
	// 세울 벽 3개 고르기
	if (count < 3) {
		for (int i = 0; i < N; i++) {
			if (i < latest_wall_y) continue;
			for (int j = 0; j < M; j++) {
				// 다음 벽을 골라야 하므로 위치가 다음 위치여야 한다.
				if ((i > latest_wall_y || j > latest_wall_x)
					&& board[i][j] == 0) {
					latest_wall_y = i;
					latest_wall_x = j;
					selected_board[i][j] = true;
					dfs(latest_wall_y, latest_wall_x, count + 1);
					selected_board[i][j] = false;
				}
			}
		}
	}
	// 벽 3개의 위치를 골랐다면 안전영역 계산한다.
	else {
		// 처음에 확산될 바이러스들을 deque에 장전한다.
		deque<pair<int, int>> dq;
		for (int i = 0; i < viruses.size(); i++) {
			dq.push_back(viruses[i]);
		}

		// 바이러스 확산 시뮬레이션을 해볼 temp_board 를 deep copy로 만든다.
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				temp_board[i][j] = board[i][j];
				if (selected_board[i][j]) {
					temp_board[i][j] = 1;
				}
			}
		}

		/* 
		bfs 를 돌며 바이러스 확산 시뮬레이션하기
		2의 개수(바이러스가 확산된 위치, temp_result)를 얻어낸다.
		*/
		int temp_result = 0;
		while (!dq.empty()) {
			pair<int, int> now = dq.front();
			dq.pop_front();
			temp_result += 1;

			for (int i = 0; i < 4; i++) {
				int ny = now.first + dy[i];
				int nx = now.second + dx[i];

				if (ny < 0 || ny >= N || nx < 0 || nx >= M) continue;
				if (temp_board[ny][nx] != 0) continue;
				temp_board[ny][nx] = 2;
				dq.push_back(pair<int, int>(ny, nx));
			}
		}

		// 바이러스가 최소로 확산된 값을 갱신한다.
		result = min(result, temp_result);
	}
}

int main() {
	cin >> N >> M;

	int zero_count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) {
				viruses.push_back(pair<int, int>(i, j));
			}
			if (board[i][j] != 1) {
				++zero_count;
			}
		}
	}

	dfs(-1, -1, 0);

	// 벽을 제외한 공간 - 바이러스가 있는 공간 - 벽 3개를 고른 공간 = 정답
	cout << zero_count - result - 3 << '\n';
}