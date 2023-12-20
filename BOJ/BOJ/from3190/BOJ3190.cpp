// https://www.acmicpc.net/problem/3190 BOJ 3190 �� 2023-12-20
/*
���� ��ü�� deque �� �ִ´�.
2���� �迭 board �� ��� ������ �� ��ü ������ �ִ´�.
0 = �� ĭ 1 = ��� 2 = �� �̴�.
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

	// 1 = ��� 2 = ��
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
		// �� �浹 ó��
		if (next_y < 0 || next_x < 0 || next_y >= board_size || next_x >= board_size) {
			break;
		}

		// �� �浹 ó��
		if (board[next_y][next_x] == 2) {
			break;
		}

		// ����� �ƴ� ��� ó�� (����� ��� ó�� ���ʿ�)
		if (board[next_y][next_x] != 1) {
			board[snake.front().first][snake.front().second] = 0;
			snake.pop_front();
		}
		// �� �̵� ó��
		snake.push_back(pair<int, int>{next_y, next_x});
		board[next_y][next_x] = 2;

		// ���� ��ȯ
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