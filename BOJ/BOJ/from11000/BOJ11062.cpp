// https://www.acmicpc.net/problem/11062 BOJ 11062 카드 게임 2023-12-22 Failed..
/*
풀이전략(정답)
https://yeeybook.tistory.com/137 참조했음
dp를 활용해야 한다.
근우가 선턴, 명우가 후턴, 즉 근우가 1턴...(홀수턴) 명우가 2턴...(짝수턴)이다.
dp[from][to] : from ~ to 까지 카드가 있다고 했을 때 근우가 얻을 수 있는 최대 점수
카드[N] : N번째 카드

1턴일 때 범위가 0, 10 일 때의 최대값을 구하려면
max(2턴일때 범위가 1, 10 일 때의 최대값 + 카드[0], 2턴일 때 범위가 0, 9일 떄의 최대값 + 카드[9]) 이다.

이제 2턴일 때 범위가 1, 10 일 때의 최대값을 구하려면
2턴은 짝수턴이므로 명우가 최선의 선택을 할 것이다. 명우가 최선의 선택을 한다는 것은
명우가 한 두가지의 선택(왼쪽 or 오른쪽) 중 근우의 점수를 제일 낮게 하는 경우를 말한다. 따라서
min(3턴일 때 범위가 2, 10일 때의 최대값 + 카드[1], 3턴일 때 범위가 1, 9일 때의 최대값 + 카드[9]) 이다.

*/
#include <iostream>
#include <deque>

using namespace std;

int main() {
	int game_count;

	cin >> game_count;

	deque<int> dq;
	while (game_count--) {
		int card_count;
		cin >> card_count;

		dq.clear();
		for (int i = 0; i < card_count; i++) {
			int card;
			cin >> card;

			dq.push_back(card);
		}

		int selected = 0;
		int result = 0;
		while (!dq.empty()) {
			int left, right;
			left = dq.front();
			right = dq.back();

			int select = 0;
			if (dq.size() <= 3) {
				if (left > right) {
					select = left;
					dq.pop_front();
				}
				else {
					select = right;
					dq.pop_back();
				}
			}
			else {
				int if_left = dq.at(1) + right;
				int if_right = left + dq.at(dq.size() - 2);

				if (if_right > if_left) {
					select = left;
					dq.pop_front();
				}
				else if (if_left > if_right) {
					select = right;
					dq.pop_back();
				}
				else {
					if (left > right) {
						select = left;
						dq.pop_front();
					}
					else {
						select = right;
						dq.pop_back();
					}
				}
			}
			if (selected % 2 == 0) {
				result += select;
			}
			++selected;
		}
		cout << result << '\n';
	}
}