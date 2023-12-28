// https://www.acmicpc.net/problem/14502 BOJ 14502 연구소 2023-12-28
#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

using namespace std;

int N, M;
int board[8][8];
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};

int result;
vector<pair<int, int>> viruses;

void dfs(int latest_wall_y, int latest_wall_x, int count) {
	cout << "count : " << count << '\n';
	if (count < 3) {
		for (int i = 0; i < N; i++) {
			if (i < latest_wall_y) continue;
			for (int j = 0; j < M; j++) {
				if ((i > latest_wall_y || j > latest_wall_x)
					&& board[i][j] == 0) {
					board[i][j] = 3;
					latest_wall_y = i;
					latest_wall_x = j;
					dfs(latest_wall_y, latest_wall_x, count + 1);
					board[i][j] = 0;
				}
			}
		}
	}
	// 안전영역 계산
	else {
		bool visited[8][8];
		fill(&visited[0][0], &visited[7][8], 0);
		deque<pair<int, int>> dq;
		for (int i = 0; i < viruses.size(); i++) {
			visited[viruses[i].first][viruses[i].second] = true;
			dq.push_back(viruses[i]);
		}

		int temp_result = 0;
		while (!dq.empty()) {
			pair<int, int> now = dq.front();
			dq.pop_front();
			temp_result += 1;

			for (int i = 0; i < 4; i++) {
				int ny = now.first + dy[i];
				int nx = now.first + dy[i];

				if (ny < 0 || ny >= N || nx < 0 || nx >= M || board[ny][nx] != 0) continue;
				if (!visited[ny][nx]) {
					visited[ny][nx] = true;
					dq.push_back(pair<int, int>(ny, nx));
				}
			}
		}

		result = max(result, temp_result);
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) {
				viruses.push_back(pair<int, int>(i, j));
			}
		}
	}

	dfs(-1, -1, 0);

	cout << result << '\n';

}