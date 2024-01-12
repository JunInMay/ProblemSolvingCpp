// https://www.acmicpc.net/problem/12100 BOJ 12100 2048 (Easy) 2024-01-12
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int s;
int result;

void up(int (&board)[20][20]) {
	for (int i = 0; i < s; i++) {
		int idx = 0;
		for (int j = 0; j < s; j++) {
			if (board[j][i] == 0) continue;
			for (int k = j + 1; k < s; k++) {
				if (board[j][i] == board[k][i]) {
					board[j][i] += board[k][i];
					board[k][i] = 0;
					break;
				}
				else if (board[j][i] != board[k][i] && board[k][i] != 0) break;
			}
			int tmp = board[j][i];
			board[j][i] = 0;
			board[idx++][i] = tmp;
		}
	}
}

void down(int(&board)[20][20]) {
	for (int i = 0; i < s; i++) {
		int idx = s;
		for (int j = s - 1; j >= 0; j--) {
			if (board[j][i] == 0) continue;
			for (int k = j - 1; k >= 0; k--) {
				if (board[j][i] == board[k][i]) {
					board[j][i] += board[k][i];
					board[k][i] = 0;
					break;
				}
				else if (board[j][i] != board[k][i] && board[k][i] != 0) break;
			}
			int tmp = board[j][i];
			board[j][i] = 0;
			board[--idx][i] = tmp;
		}
	}
}

void left(int(&board)[20][20]) {
	for (int i = 0; i < s; i++) {
		int idx = 0;
		for (int j = 0; j < s; j++) {
			if (board[i][j] == 0) continue;
			for (int k = j + 1; k < s; k++) {
				if (board[i][j] == board[i][k]) {
					board[i][j] += board[i][k];
					board[i][k] = 0;
					break;
				}
				else if (board[i][j] != board[i][k] && board[i][k] != 0) break;
			}
			int tmp = board[i][j];
			board[i][j] = 0;
			board[i][idx++] = tmp;
		}
	}
}

void right(int(&board)[20][20]) {
	for (int i = 0; i < s; i++) {
		int idx = s;
		for (int j = s - 1; j >= 0; j--) {
			if (board[i][j] == 0) continue;
			for (int k = j - 1; k >= 0; k--) {
				if (board[i][j] == board[i][k]) {
					board[i][j] += board[i][k];
					board[i][k] = 0;
					break;
				}
				else if (board[i][j] != board[i][k] && board[i][k] != 0) break;
			}
			int tmp = board[i][j];
			board[i][j] = 0;
			board[i][--idx] = tmp;
		}
	}
}

//void print(int board[20][20]) {
//	for (int i = 0; i < s; i++) {
//		for (int j = 0; j < s; j++) {
//			cout << board[i][j] << '\t';
//		}
//		cout << '\n';
//	}
//}

struct Function {
	void (*f)(int (&board)[20][20]);
};

Function functions[4] = { up, down, left, right };

void dfs(int board[20][20], int count) {
	if (count == 5) {
		int t_max = 0;
		for (int i = 0; i < s; i++) {
			for (int j = 0; j < s; j++) {
				result = max(result, board[i][j]);
				t_max = max(t_max, board[i][j]);
			}
		}
	}
	else {
		for (int i = 0; i < 4; i++) {
			int temp_board[20][20];
			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 20; j++) {
					temp_board[i][j] = board[i][j];
				}
			}
			functions[i].f(temp_board);
			dfs(temp_board, count + 1);
		}
	}
}



int main() {
	cin >> s;

	int board[20][20];

	memset(board, 0, sizeof(board));

	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			cin >> board[i][j];
		}
	}

	dfs(board, 0);

	cout << result;
}



/*
3
2 2 2
0 0 0
2 2 2

3
4 2 8
4 4 0
0 4 2

3
4 2 8
4 0 4
0 4 2
*/