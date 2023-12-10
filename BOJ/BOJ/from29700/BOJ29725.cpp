// https://www.acmicpc.net/problem/29725 BOJ 29725 체스 초보 브실이 2023-12-10
#include <iostream>

using namespace std;

int main() {
	int result = 0;
	for (int i = 0; i < 8; i++) {
		string line;
		cin >> line;

		for (int j = 0; j < 8; j++) {
			char c = line[j];

			int sign = 1;
			if ((int)c >= 97 && (int)c <= 122) sign = -1;

			int point = 0;
			if (c == 'k' || c == 'K') continue;
			else if (c == 'p' || c == 'P') point = 1;
			else if (c == 'n' || c == 'N') point = 3;
			else if (c == 'b' || c == 'B') point = 3;
			else if (c == 'r' || c == 'R') point = 5;
			else if (c == 'q' || c == 'Q') point = 9;

			result += (point * sign);
		}
	}

	cout << result;
}