// https://www.acmicpc.net/problem/17780 BOJ 17780 새로운 게임 2024-01-30
/*
구현 실패.
패인 : 
처음에 pieces에서 deque<int> 가 아니라 deque<pair<int, int>> 처럼
체스 말의 번호 뿐 아니라 그 체스 말이 어떤 방향을 보고 있는지도 확인했어야 함.
*/
#include <iostream>
#include <vector>
#include <deque>
//#include <algorithm>

using namespace std;

// pieces : 각 체스말이 몇 번 칸에서 어떤 식으로 업혀있는지 확인
deque<int> pieces[14][14];
// 파란, 빨간 칸 확인
int board[14][14];
// 움직일 수 있는 체스 말이 몇 번 칸에 있는지 확인
// <체스말 번호, <보고 있는 방향, <y값, x값>>>
vector<pair<int, pair<int, pair<int, int>>>> order;
int N, K;

// 우좌상하
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

		// 필요할 수도 있어서 일단 선언 아마 불필요할듯.
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

			// 흰색일 경우
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
			// 빨간색일 경우 뒤집기
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
			// 파란색일 경우 방향전환
			else {
				nd = convert(d); // 방향전환
				ny = y + dy[nd];
				nx = x + dx[nd];

				// 방향전환해서 움직였을 때 정상인 경우 이동 진행
				if (board[ny][nx] != 2) {
					d = nd;
					continue;
				}
				// 비정상인 경우 방향만 바꾼 상태에서 멈춤
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