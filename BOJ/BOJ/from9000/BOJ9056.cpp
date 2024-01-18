// https://www.acmicpc.net/problem/9056 BOJ 9056 Letter Bank 2024-01-17
#include <iostream>

using namespace std;

int main() {
	int iteration;
	cin >> iteration;

	for (int i = 0; i < iteration; i++) {
		string bank, str;
		cin >> bank >> str;

		bool* bank_checked = new bool[bank.size()];
		bool* str_checked = new bool[str.size()];

		fill(bank_checked, bank_checked + bank.size(), 0);
		fill(str_checked, str_checked + str.size(), 0);

		for (int j = 0; j < bank.size(); j++) {
			for (int k = 0; k < str.size(); k++) {
				if (bank[j] == str[k]) {
					bank_checked[j] = true;
					str_checked[k] = true;
				}
			}
		}

		bool flag = true;
		for (int j = 0; j < bank.size(); j++) {
			if (!bank_checked[j]) {
				flag = false;
				break;
			}
		}
		for (int j = 0; j < str.size(); j++) {
			if (!str_checked[j]) {
				flag = false;
				break;
			}
		}

		string result = "YES";
		if (!flag) result = "NO";

		cout << result << '\n';
		delete[] bank_checked;
		delete[] str_checked;
	}
}