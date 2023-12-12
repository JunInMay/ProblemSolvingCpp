// https://www.acmicpc.net/problem/27433 BOJ 27433 ÆÑÅä¸®¾ó 2 2023-12-12
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	long long result = 1;
	for (int i = 0; i < N + 1; i++) {
		result *= max(i, 1);
	}

	cout << result;
}