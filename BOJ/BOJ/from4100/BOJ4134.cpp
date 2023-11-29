// https://www.acmicpc.net/problem/4134 다음 소수 2023-11-29
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int iteration;

	cin >> iteration;

	long long limit = 1000000000;
	limit *= 4;

	for (int i = 0; i < iteration; i++) {
		long long number;
		cin >> number;

		for (long long j = number; ; j++) {
			bool is_prime = true;
			for (long long k = 2; k <= sqrt(j); k++) {
				if (j % k == 0) {
					is_prime = false;
					break;
				}
			}
			if (j <= 1)
				continue;

			if (is_prime) {
				cout << j << '\n';
				break;
			}
		}
	}
}