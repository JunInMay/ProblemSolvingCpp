// https://www.acmicpc.net/problem/31306 BOJ 31306 Is Y a Vowel? 2024-02-22
#include <iostream>

using namespace std;

int main() {
	string input;
	cin >> input;

	int withY = 0;
	int withoutY = 0;
	for (int i = 0; i < input.size(); i++) {
		char now = input[i];

		if (now == 'a') { withY++; withoutY++; }
		if (now == 'e') { withY++; withoutY++; }
		if (now == 'i') { withY++; withoutY++; }
		if (now == 'o') { withY++; withoutY++; }
		if (now == 'u') { withY++; withoutY++; }
		if (now == 'y') withY++;
	}

	cout << withoutY << ' ' << withY;
}