// https://www.acmicpc.net/problem/1977 BOJ 1977 완전제곱수 2023-12-21
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int M, N;
	cin >> M >> N;

	int min = -1;
	int sum = 0;
	for (int i = M; i <= N; i++) {
		if (sqrt(i) - (int)sqrt(i) == 0) {
			if (min == -1) {
				min = i;
			}
			sum += i;
		}
	}
	if (min == -1) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min;
	}
}