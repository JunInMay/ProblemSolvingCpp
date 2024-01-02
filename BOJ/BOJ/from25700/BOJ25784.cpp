// https://www.acmicpc.net/problem/25784 BOJ 25784 Easy-to-Solve Expressions 2024-01-02
#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int result = 3;
	if (a + b == c || c + a == b || b + c == a) {
		result = 1;
	}
	else if (a * b == c || c * a == b || b * c == a) {
		result = 2;
	}

	cout << result;
}