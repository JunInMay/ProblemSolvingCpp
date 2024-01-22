// https://www.acmicpc.net/problem/17174 BOJ 17174 전체 계산 횟수 2024-01-22
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int result = N;
	while (N >= M) {
		result += N / M;
		N = N / M;
	}

	cout << result;
}