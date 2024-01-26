// https://www.acmicpc.net/problem/18063 BOJ 18063 Jazz Enthusiast 2024-01-26
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, c;
	cin >> n >> c;

	for (int i = 0; i < n; i++) {
		string inputString;
		getline(cin, inputString);

		int colonCount = 0;
		for (int j = 0; j < inputString.size(); j++) {
			if (inputString[i] == ':') {
				colonCount++;
			}
		}

		if (colonCount == 1) {

		}
		else if (colonCount == 2) {

		}
	}
}