// https://www.acmicpc.net/problem/26560 BOJ 26560 Periods 2024-04-13
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	cin.ignore();
	for (int i = 0; i < n; i++) {
		string input;
		getline(cin, input);

		cout << input;
		if (input[input.length() - 1] != '.') {
			cout << '.';
		}
		cout << '\n';
	}
}