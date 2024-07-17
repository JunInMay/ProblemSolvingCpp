// https://www.acmicpc.net/problem/24294 BOJ 24294 ГРАДИНА 2024-01-10
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int w1, h1, w2, h2;

	cin >> w1 >> h1 >> w2 >> h2;

	cout << h1 * 2 + h2 * 2 + w1 + w2 + abs(w1 - w2) + 4;
}