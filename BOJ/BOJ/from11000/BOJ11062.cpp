// https://www.acmicpc.net/problem/11062 BOJ 11062 ī�� ���� 2023-12-22 Failed..
/*
Ǯ������(����)
https://yeeybook.tistory.com/137 ��������
dp�� Ȱ���ؾ� �Ѵ�.
�ٿ찡 ����, ��찡 ����, �� �ٿ찡 1��...(Ȧ����) ��찡 2��...(¦����)�̴�.
dp[from][to] : from ~ to ���� ī�尡 �ִٰ� ���� �� �ٿ찡 ���� �� �ִ� �ִ� ����
ī��[N] : N��° ī��

1���� �� ������ 0, 10 �� ���� �ִ밪�� ���Ϸ���
max(2���϶� ������ 1, 10 �� ���� �ִ밪 + ī��[0], 2���� �� ������ 0, 9�� ���� �ִ밪 + ī��[9]) �̴�.

���� 2���� �� ������ 1, 10 �� ���� �ִ밪�� ���Ϸ���
2���� ¦�����̹Ƿ� ��찡 �ּ��� ������ �� ���̴�. ��찡 �ּ��� ������ �Ѵٴ� ����
��찡 �� �ΰ����� ����(���� or ������) �� �ٿ��� ������ ���� ���� �ϴ� ��츦 ���Ѵ�. ����
min(3���� �� ������ 2, 10�� ���� �ִ밪 + ī��[1], 3���� �� ������ 1, 9�� ���� �ִ밪 + ī��[9]) �̴�.

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