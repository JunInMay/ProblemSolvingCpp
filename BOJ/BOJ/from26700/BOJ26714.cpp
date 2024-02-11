// https://www.acmicpc.net/problem/26714 BOJ 26714 Liczenie punktów 2024-02-11
#include <iostream>

using namespace std;

int main() {
	int N;
	string input;
	cin >> N >> input;

	int idx = 0;
	int result = 0;
	for (int i = 0; i < 10; i++) {
		bool correct = true;
		for (int j = 0; j < N / 10; j++) {
			idx = (i * N / 10) + j;
			if (input[idx] == 'N') {
				correct = false;
				break;
			}
		}

		if (correct) result++;
	}

	cout << result;
}