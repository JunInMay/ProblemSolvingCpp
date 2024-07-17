// https://www.acmicpc.net/problem/11098 BOJ 11098  첼시를 도와줘! 2023-12-24
#include <iostream>

using namespace std;

int main() {
	int case_count;
	cin >> case_count;

	while (case_count--) {
		int player_count;
		cin >> player_count;

		int max_price = -1;
		string max_player = "";
		for (int i = 0; i < player_count; i++) {
			string name;
			int price;
			cin >> price >> name;

			if (price > max_price) {
				max_price = price;
				max_player = name;
			}
		}
		cout << max_player << '\n';
	}
}