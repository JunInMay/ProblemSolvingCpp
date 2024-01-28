// https://www.acmicpc.net/problem/21412 BOJ 21412 ¬¥¬â¬à¬Ò¬î 2024-01-28
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;

	int maxNumerator = -1;
	int maxDenominator = -1;
	for (int i = 1; i < N; i++) {
		int numerator = i;
		int denominator = N - i;

		bool isReducible = true;
		if (numerator % denominator == 0 || numerator > denominator) continue;
		for (int j = 2; j <= (int)sqrt(max(numerator, denominator)); j++) {
			if ((numerator % j == 0 && denominator % j == 0)) {
				isReducible = false;
				break;
			}
		}

		if (isReducible) {
			maxNumerator = numerator;
			maxDenominator = denominator;
		}
	}

	cout << maxNumerator << " " << maxDenominator;
}