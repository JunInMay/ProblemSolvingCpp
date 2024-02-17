// https://www.acmicpc.net/problem/15474 BOJ 15474 זחש¶ (Pencils) 2024-02-15
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double N, A, B, C, D;
	cin >> N >> A >> B >> C >> D;

	cout << min(ceil(N / A) * B, ceil(N / C) * D);
}