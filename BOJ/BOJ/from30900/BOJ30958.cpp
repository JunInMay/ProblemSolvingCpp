// https://www.acmicpc.net/problem/30958 BOJ 30958 서울사이버대학을 다니고 2024-02-07
#include <iostream>
#include <string>

using namespace std;

int frequencies[26];

int main() {
	int N;
	cin >> N;

	cin.ignore();

	string input;
	getline(cin, input);
	for (int i = 0; i < N; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			frequencies[input[i] - 'a']++;
		}
	}

	int maxFrequency = -1;
	for (int i = 0; i < 26; i++) {
		if (frequencies[i] > maxFrequency) {
			maxFrequency = frequencies[i];
		}
	}

	cout << maxFrequency;
}