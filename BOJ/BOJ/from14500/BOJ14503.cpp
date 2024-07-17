// https://www.acmicpc.net/problem/14503 BOJ 14503 로봇 청소기 2024-01-18
/*
뭐 로봇 청소기를 동서남북으로 움직인다길래 그래프 문제인 줄 알았는데 재미있는 구현 문제.

*/
#include <iostream>
#include <deque>

using namespace std;

int board[50][50], N, M;

// 북 동 남 서
int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0, 1, 0, -1 };

bool is_cleanable(const int& y, const int& x) {
	bool result = false;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i], nx = x + dx[i];
		if (board[ny][nx] == 0) {
			result = true;
			break;
		}
	}

	return result;
}

int main() {
	cin >> N >> M;
	int r, c, d;
	cin >> r >> c >> d;

	deque<pair<int, pair<int, int>>> dq;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}

	pair<int, pair<int, int>> now(d, pair<int, int>(r, c));
	//dq.push_back(pair<int, pair<int, int>>(direction, pair<int, int>(r, c)));

	int result = 0;
	int idx = 0;
	while (true) {
		//cout << ++idx << '\n';
		int d = now.first;
		pair<int, int> position = now.second;
		int y = position.first, x = position.second;

		if (board[y][x] == 0) {
			board[y][x] = 2;
			++result;
		}

		if (is_cleanable(y, x)) {
			d = (d - 1 + 4) % 4;
			int ny = y + dy[d], nx = x + dx[d];
			now.first = d;
			if (board[ny][nx] == 0) {
				now.second.first = ny;
				now.second.second = nx;
			}
		}
		else {
			d = (d - 2 + 4) % 4;
			int ny = y + dy[d], nx = x + dx[d];
			if (board[ny][nx] == 1) break;
			else {
				now.second.first = ny;
				now.second.second = nx;
			}
		}
	}
	
	cout << result;
}

/*
4 4
1 1 0
1 1 1 1
1 0 0 1
1 0 0 1
1 1 1 1

*/