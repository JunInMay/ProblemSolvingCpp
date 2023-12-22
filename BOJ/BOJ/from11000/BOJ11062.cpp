// https://www.acmicpc.net/problem/11062 BOJ 11062 카드 게임 2023-12-22 Failed..
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