// https://www.acmicpc.net/problem/3190 BOJ 3190 뱀 2023-12-20
/*
뱀의 몸체를 deque 에 넣는다.
2차원 배열 board 에 사과 정보와 뱀 몸체 정보를 넣는다.
0 = 빈 칸 1 = 사과 2 = 뱀 이다.
*/
#include <iostream>
#include <deque>

using namespace std;

int dy[] = {0, 1, 0, -1};
int dx[] = { 1, 0, -1, 0};

int board[100][100];
int turn_timings[100];
char turn_directions[100];

int main() {
	deque<pair<int, int>> snake;
	int board_size;
	int apple_count;
	cin >> board_size >> apple_count;

	for (int i = 0; i < apple_count; i++) {
		int y, x;
		cin >> y >> x;
		board[y-1][x-1] = 1;
	}

	int turn_count;
	cin >> turn_count;

	for (int i = 0; i < turn_count; i++) {
		int timing;
		char change;
		cin >> timing >> change;

		turn_timings[i] = timing;
		turn_directions[i] = change;
	}

	// 1 = 사과 2 = 뱀
	board[0][0] = 2;
	int direction = 0;
	int turn_index = 0;
	int now_y = 0, now_x = 0;
	int result = 0;
	snake.push_back(pair<int, int>{now_y, now_x});
	while (1) {
		int turn_timing = -1;
		char turn_direction = 0;
		if (turn_index < turn_count) {
			turn_timing = turn_timings[turn_index];
			turn_direction = turn_directions[turn_index];
		}

		int next_y = now_y + dy[direction];
		int next_x = now_x + dx[direction];
		++result;
		// 벽 충돌 처리
		if (next_y < 0 || next_x < 0 || next_y >= board_size || next_x >= board_size) {
			break;
		}

		// 몸 충돌 처리
		if (board[next_y][next_x] == 2) {
			break;
		}

		// 사과가 아닐 경우 처리 (사과일 경우 처리 불필요)
		if (board[next_y][next_x] != 1) {
			board[snake.front().first][snake.front().second] = 0;
			snake.pop_front();
		}
		// 뱀 이동 처리
		snake.push_back(pair<int, int>{next_y, next_x});
		board[next_y][next_x] = 2;

		// 방향 전환
		if (turn_timing == result) {
			if (turn_direction == 'L') {
				direction = (direction - 1 + 4) % 4;
			}
			else {
				direction = (direction + 1 + 4) % 4;
			}
			++turn_index;
		}

		now_y = next_y;
		now_x = next_x;
	}

	cout << result;
}