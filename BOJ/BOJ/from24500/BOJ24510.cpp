// https://www.acmicpc.net/problem/24510 BOJ 24510 시간복잡도를 배운 도도 2024-05-27
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;

	int maximum = -1;
	for (int i = 0; i < n; i++) {
		string input;
		cin >> input;

		bool isWhile= false;
		bool isFor = false;
		char before = 0;
		int repetition = 0;
		for (int j = 0; j < input.length(); j++) {
			char c = input[j];

			switch (c) {
			case 'f':
				isFor = true;
				isWhile = false;
				break;
			case 'o':
				if (before != 'f') isFor = false;
				break;
			case 'r':
				if (before != 'o') isFor = false;
				else if (isFor) repetition++;
				break;
			case 'w':
				isWhile = true;
				isFor = false;
				break;
			case 'h':
				if (before != 'w') isWhile = false;
				break;
			case 'i':
				if (before != 'h') isWhile = false;
				break;
			case 'l':
				if (before != 'i') isWhile = false;
				break;
			case 'e':
				if (before != 'l') isWhile = false;
				else if (isWhile) repetition++;
				break;
			default:
				break;
			}
			before = c;
		}

		maximum = max(maximum, repetition);
	}
	cout << maximum;
}