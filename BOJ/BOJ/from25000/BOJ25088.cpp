// https://www.acmicpc.net/problem/25088 Punched Cards 2024-04-25
#include <iostream>

using namespace std;

int main() {
	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++) {
		int r, c;
		cin >> r >> c;
		cout << "Case #" << i + 1 << ":\n";

		for (int j = 0; j < 2 * r + 1; j++) {
			for (int k = 0; k < 2 * c + 1; k++) {
				char c = '.';
				if (j % 2 == 0) {
					if (k % 2 == 0)
						c = '+';
					else {
						c = '-';
					}
					if (j == 0 && k <= 1) c = '.';
				}
				else {
					if (k % 2 == 0) {
						c = '|';
						if (j == 1 && k == 0)  c = '.';
					}
					else c = '.';
				}
				cout << c;
			}
			cout << '\n';
		}
	}
}