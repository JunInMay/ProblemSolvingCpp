// https://www.acmicpc.net/problem/17103 °ñµå¹ÙÈå ÆÄÆ¼¼Ç 2023-11-30
#include <iostream>
#include <algorithm>


using namespace std;

int main() {
	bool* shieve = new bool[1000001];

	fill(shieve, shieve + 1000001, true);

	shieve[0] = false;
	shieve[1] = false;
	for (int i = 2; i <= 1000001; i++) {
		for (int j = i + i; j <= 1000001; j += i) {
			shieve[j] = false;
		}
	}

	int iteration;

	cin >> iteration;

	for (int i = 0; i < iteration; i++) {
		int number;
		cin >> number;
		int count = 0;
		for (int j = 2; j <= number / 2; j++) {
			if (shieve[j] && shieve[number - j]) {
				++count;
			}
		}

		cout << count << '\n';
	}
}