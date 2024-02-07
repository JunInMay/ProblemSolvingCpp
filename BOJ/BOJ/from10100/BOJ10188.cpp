// https://www.acmicpc.net/problem/10188 BOJ 10188 Quadrilateral 2024-02-07
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		for (int j = 0; j < y; j++) {
			for (int k = 0; k < x; k++) {
				cout << 'X';
			}
			cout << '\n';
		}

		if (i != N - 1) {
			cout << '\n';
		}
	}
}