// https://www.acmicpc.net/problem/8436 BOJ 8436 Kamil 2024-05-01
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;

	int result = 1;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		if (c == 'T' || c == 'D' || c == 'L' || c == 'F') result *= 2;
	}

	cout << result;
}