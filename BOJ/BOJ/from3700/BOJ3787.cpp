// https://www.acmicpc.net/problem/3787 BOJ 3787 Count on Canton 2024-03-19
#include <iostream>

using namespace std;

int counts[10001];
int main() {
	for (int i = 1; i < sizeof(counts) / sizeof(int); i++) {
		counts[i] = counts[i - 1] + i;
	}

	int number;
	while (cin >> number) {
		int l = 0, r = 10000;

		while (l <= r) {
			int m = (l + r) / 2;
			if (counts[m] < number) {
				l = m + 1;
			}
			else if (counts[m] >= number) {
				r = m - 1;
			}
		}
		int idx = r;
		int offset = number - counts[idx] - 1;

		int numerator, denominator;
		if (idx % 2 == 0) {
			numerator = idx + 1 - offset;
			denominator = 1 + offset;
		}
		else {
			numerator = 1 + offset;
			denominator = idx + 1 - offset;
		}

		cout << "TERM " << number << " IS " << numerator << "/" << denominator << '\n';
	}
}