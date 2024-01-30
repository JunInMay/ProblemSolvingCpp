// https://www.acmicpc.net/problem/17780 BOJ 17780 ���ο� ���� 2024-01-30
/*
���� ����.
���� : 
ó���� pieces���� deque<int> �� �ƴ϶� deque<pair<int, int>> ó��
ü�� ���� ��ȣ �� �ƴ϶� �� ü�� ���� � ������ ���� �ִ����� Ȯ���߾�� ��.
*/
#include <iostream>
#include <vector>
#include <deque>
//#include <algorithm>

using namespace std;

// pieces : �� ü������ �� �� ĭ���� � ������ �����ִ��� Ȯ��
deque<int> pieces[14][14];
// �Ķ�, ���� ĭ Ȯ��
int board[14][14];
// ������ �� �ִ� ü�� ���� �� �� ĭ�� �ִ��� Ȯ��
// <ü���� ��ȣ, <���� �ִ� ����, <y��, x��>>>
vector<pair<int, pair<int, pair<int, int>>>> order;
int N, K;

// ���»���
int dy[4] = { 0, 0, -1, 1 };
int dx[4] = { 1, -1, 0, 0 };

int convert(int d) {
	if (d <= 1)
		return (d + 1) % 2;
	else
		return 2 + (d - 2 + 1) % 2;
}

bool isEnd;
void move() {
	for (int i = 1; i <= K; i++) {
		int checked = -1;
		for (int j = 0; j < order.size(); j++) {
			if (order[j].first == i) {
				checked = j;
				break;
			}
		}
		if (checked == -1) continue;

		int y, x, d, ny, nx, nd;
		auto nowOrder = order[checked];
		order.erase(order.begin() + checked);
		d = nowOrder.second.first;
		y = nowOrder.second.second.first;
		x = nowOrder.second.second.second;

		ny = y + dy[d];
		nx = x + dx[d];

		// �ʿ��� ���� �־ �ϴ� ���� �Ƹ� ���ʿ��ҵ�.
		bool isOut = false;
		if (ny < 1 || nx < 1 || ny > N || nx > N) isOut = true;

		int bottom = nowOrder.first;
		int nextSize = 0;
		bool isStacked = false;
		while (true) {
			int color = board[ny][nx];
			deque<int>* nowPiece = &pieces[y][x];
			deque<int>* nextPiece = &pieces[ny][nx];
			if ((*nextPiece).size() != 0) isStacked = true;

			// ����� ���
			if (color == 0) {
				int iteration = (*nowPiece).size();
				for (int j = 0; j < iteration; j++) {
					(*nextPiece).push_back((*nowPiece).front());
					(*nowPiece).pop_front();
				}
				nd = d;
				bottom = (*nextPiece).front();
				nextSize = (*nextPiece).size();
				break;
			}
			// �������� ��� ������
			else if (color == 1) {
				int iteration = (*nowPiece).size();
				for (int j = 0; j < iteration; j++) {
					(*nextPiece).push_back((*nowPiece).back());
					(*nowPiece).pop_back();
				}
				bottom = (*nextPiece).front();
				nd = d;
				nextSize = (*nextPiece).size();
				break;
			}
			// �Ķ����� ��� ������ȯ
			else {
				nd = convert(d); // ������ȯ
				ny = y + dy[nd];
				nx = x + dx[nd];

				// ������ȯ�ؼ� �������� �� ������ ��� �̵� ����
				if (board[ny][nx] != 2) {
					d = nd;
					continue;
				}
				// �������� ��� ���⸸ �ٲ� ���¿��� ����
				else {
					nextPiece = &pieces[y][x];
					ny = y;
					nx = x;
					bottom = (*nextPiece).front();
					nextSize = (*nextPiece).size();
					break;
				}
			}
		}
		if (nextSize >= 4) isEnd = true;

		if (!isStacked) 
			order.push_back(pair<int, pair<int, pair<int, int>>>(bottom, pair<int, pair<int, int>>(nd, pair<int, int>(ny, nx))));
	}
}


int main() {
	cin >> N >> K;

	fill(&board[0][0], &board[13][14], 2);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 14; j++) {
			cout << board[i][j] << " ";
		}
		cout << '\n';
	}

	for (int i = 0; i < K; i++) {
		int y, x, d;
		cin >> y >> x >> d;
		pieces[y][x].push_back(i + 1);
		order.push_back(pair<int, pair<int, pair<int, int>>>(i + 1, pair<int, pair<int, int>>(d - 1, pair<int, int>(y, x))));
	}

	int result = -1;
	for (int i = 0; i < 1000; i++) {
		move();
		if (isEnd) {
			result = i + 1;
			break;
		}
	}
	cout << result;

}