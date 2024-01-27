// https://www.acmicpc.net/problem/1996 BOJ 1996 Áö·Ú Ã£±â 2024-01-27
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

char board[1002][1002];
int mineBoard[1002][1002];

int N;

// 11 12 1 3 5 6 7 9 
int dy[] = { -1, -1, -1, 0, 1, 1, 1, 0 };
int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };

int main() {
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		string input;
		cin >> input;
		for (int j = 1; j <= N; j++) {
			board[i][j] = input[j - 1];
			if (input[j - 1] >= '0' && input[j - 1] <= '9')
				mineBoard[i][j] = input[j - 1] - '0';
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int mine = 0;
			for (int k = 0; k < 8; k++) {
				int nY = i + dy[k];
				int nX = j + dx[k];

				mine += mineBoard[nY][nX];
			}
			char result = '*';
			if (board[i][j] < '0' || board[i][j] > '9') {
				if (mine >= 10)
					result = 'M';
				else
					result = (char)(mine + '0');
			}
			cout << result;
		}
		cout << '\n';
	}
}