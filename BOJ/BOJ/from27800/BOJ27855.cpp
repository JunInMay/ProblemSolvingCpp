// https://www.acmicpc.net/problem/27855 BOJ 27855 Cornhole 2024-02-06
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A, B, a, b;
	cin >> A >> B >> a >> b;

	int p1 = A * 3 + B;
	int p2 = a * 3 + b;

	if (p1 == p2) {
		cout << "NO SCORE";
		return 0;
	}

	int winner = 1;
	if (p2 > p1) {
		winner = 2;
	}

	cout << winner << " " << abs(p1 - p2);
}
