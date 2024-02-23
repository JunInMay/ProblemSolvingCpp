// https://www.acmicpc.net/problem/9299 BOJ 9299 Math Tutoring 2024-02-18
#include <iostream>

using namespace std;

int exponents[1000];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int cases;
	cin >> cases;
	
	for (int i = 0; i < cases; i++) {
		int highestExponent;
		cin >> highestExponent;

		int recordedExponent = -1;
		cout << "Case " << i + 1 << ": ";
		for (int j = 0; j < highestExponent + 1; j++) {
			int currentExponent = highestExponent - j;
			int N;
			cin >> N;

			if (N != 0 && recordedExponent == -1)
				recordedExponent = currentExponent - 1;

			exponents[j] = N * currentExponent;
		}

		cout << recordedExponent << ' ';
		for (int j = 0; j < highestExponent; j++) {
			cout << exponents[j] << ' ';
		}
		cout << '\n';
	}
}