// https://www.acmicpc.net/problem/28248 BOJ 28248 Deliv-e-droid 2024-01-03
#include <iostream>

using namespace std;

int main() {
	int p, c;
	cin >> p >> c;

	int result = p * 50 - c * 10;
	result += p > c ? 500 : 0;

	cout << result;
}