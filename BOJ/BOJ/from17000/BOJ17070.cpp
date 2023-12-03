//https://www.acmicpc.net/problem/17070 ������ �ű�� 1 2023-12-03
// �� ���� Ǯ�� : https://www.acmicpc.net/source/69898023
/*
���� C++�� �ͼ������� ���̱��ϴ�.
ó������ C++�� �׷��� Ž���� �����غô�.
*/
#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class Pipe {
public:
	int startY, startX, endY, endX;
	int direction; // -1 ���� 0 �밢�� 1 ����
	Pipe(int sy, int sx, int d) : startY(sy), startX(sx), direction(d) {};
	Pipe(int sy, int sx, int ey, int ex, int d) : startY(sy), startX(sx), endY(ey), endX(ex), direction(d) {};
};

int main() {
	int size;
	cin >> size;

	int** board = new int*[size];
	for (int i = 0; i < size; ++i) {
		board[i] = new int[size];
	}

	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			cin >> board[i][j];
		}
	}
		
	Pipe p(0, 0, 0, 1, 1);
	queue<Pipe> q;
	q.push(p);

	int result = 0;
	while (q.size()) {
		Pipe now = q.front();
		q.pop();

		if (now.endX == size - 1 && now.endY == size - 1) {
			++result;
			continue;
		}

		int d = now.direction;

		int ny = now.startY, nx = now.startX;
		switch (d) {
		case -1:
			ny += 1;
			break;
		case 1:
			nx += 1;
			break;
		case 0:
			ny += 1;
			nx += 1;
			break;
		}

		// ���� Ȯ��
		if (d == -1 || d == 0) {
			if (ny + 1 < size && !board[ny + 1][nx]) {
				Pipe next{ ny, nx, -1 };
				next.endY = ny + 1, next.endX = nx;
				q.push(next);
			}
		}

		// ���� Ȯ��
		if (d == 1 || d == 0) {
			if (nx + 1 < size && !board[ny][nx + 1]) {
				Pipe next{ ny, nx, 1 };
				next.endY = ny, next.endX = nx + 1;
				q.push(next);
			}
		}

		// �밢�� Ȯ��
		if (nx + 1 < size && ny + 1 < size && (!board[ny + 1][nx + 1] && !board[ny][nx + 1] && !board[ny + 1][nx])) {
			Pipe next{ ny, nx, 0 };
			next.endY = ny + 1, next.endX = nx + 1;
			q.push(next);
		}

	}

	cout << result;


	for (int i = 0; i < size; ++i) {
		delete[] board[i];
	}
	delete[] board;
}


/*
16
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

*/