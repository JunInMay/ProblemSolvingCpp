//https://www.acmicpc.net/problem/9772 BOJ 9772 Quadrants 2024-01-13
#include <iostream>

using namespace std;

int main() {
	while (1) {
		double x, y;
		cin >> x >> y;

		string result = "AXIS";
		if (x > 0 && y > 0) {
			result = "Q1";
		}
		else if (x < 0 && y > 0) {
			result = "Q2";
		}
		else if (x < 0 && y < 0) {
			result = "Q3";
		}
		else if (x > 0 && y < 0) {
			result = "Q4";
		}

		cout << result << '\n';

		if (x == y && x == 0) break;
	}
}