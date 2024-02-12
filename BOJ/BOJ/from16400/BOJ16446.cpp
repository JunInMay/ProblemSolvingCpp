// https://www.acmicpc.net/problem/16446 BOJ 16446 Enigma 2024-02-12
#include <iostream>

using namespace std;

int main() {
	string encrypted, bed;

	cin >> encrypted >> bed;

	int result = 0;

	for (int i = 0; i < encrypted.size() - bed.size() + 1; i++) {
		bool isFit = true;
		for (int j = 0; j < bed.size(); j++) {
			if (encrypted[i + j] == bed[j]) {
				isFit = false;
				break;
			}
		}

		if (isFit) result++;
	}

	cout << result;
}