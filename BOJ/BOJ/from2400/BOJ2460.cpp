// https://www.acmicpc.net/problem/2460 BOJ 2460 지능형 기차 2 2024-01-04
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int result = 0;
	int mx = -1;
	for (int i = 0; i < 10; i++) {
		int in, out;
		cin >> out >> in;

		result += in;
		result -= out;

		mx = max(mx, result);
	}

	cout << mx;
}