// https://www.acmicpc.net/problem/26040 BOJ 26040 Ư�� �빮�ڸ� �ҹ��ڷ� �ٲٱ� 2024-01-05
#include <iostream>

using namespace std;

int main() {
	string input;
	cin >> input;

	while (1) {
		if (cin.eof()) break;
		char c;
		cin >> c;

		for (int i = 0; i < input.size(); i++) {
			if (c == input[i]) {
				input[i] = c + 32;
			}
		}
	}

	cout << input;
}