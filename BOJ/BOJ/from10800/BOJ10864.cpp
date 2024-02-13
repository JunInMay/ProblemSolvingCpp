// https://www.acmicpc.net/problem/10864 BOJ 10864 Ä£±¸ 2024-02-13
#include <iostream>

using namespace std;

int friendCounts[1001];

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;

		friendCounts[A]++;
		friendCounts[B]++;
	}

	for (int i = 1; i <= N; i++) {
		cout << friendCounts[i] << '\n';
	}
}