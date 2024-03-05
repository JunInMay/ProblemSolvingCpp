// https://www.acmicpc.net/problem/11161 BOJ 11161 Negative People in Da House 2024-03-05
#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int M;
		cin >> M;

		int result = 0;
		int people = 0;
		for (int j = 0; j < M; j++) {
			int in, out;
			cin >> in >> out;

			people += in - out;
			result = max(result, 0 - people);
		}

		cout << result << '\n';
	}
}