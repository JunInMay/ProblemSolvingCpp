// https://www.acmicpc.net/problem/14502 BOJ 14502 ������ 2023-12-28
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
	// ���� �� 3�� ����
	if (count < 3) {
		for (int i = 0; i < N; i++) {
			if (i < latest_wall_y) continue;
			for (int j = 0; j < M; j++) {
				// ���� ���� ���� �ϹǷ� ��ġ�� ���� ��ġ���� �Ѵ�.
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
	// �� 3���� ��ġ�� ����ٸ� �������� ����Ѵ�.
	else {
		// ó���� Ȯ��� ���̷������� deque�� �����Ѵ�.
		deque<pair<int, int>> dq;
		for (int i = 0; i < viruses.size(); i++) {
			dq.push_back(viruses[i]);
		}

		// ���̷��� Ȯ�� �ùķ��̼��� �غ� temp_board �� deep copy�� �����.
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				temp_board[i][j] = board[i][j];
				if (selected_board[i][j]) {
					temp_board[i][j] = 1;
				}
			}
		}

		/* 
		bfs �� ���� ���̷��� Ȯ�� �ùķ��̼��ϱ�
		2�� ����(���̷����� Ȯ��� ��ġ, temp_result)�� ����.
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

		// ���̷����� �ּҷ� Ȯ��� ���� �����Ѵ�.
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

	// ���� ������ ���� - ���̷����� �ִ� ���� - �� 3���� �� ���� = ����
	cout << zero_count - result - 3 << '\n';
}