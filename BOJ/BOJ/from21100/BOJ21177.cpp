// https://www.acmicpc.net/problem/21177 BOJ 21177 No Thanks! 2024-06-13
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end());

	int startingNumber = -1;
	long long result = 0;
	for (int i = 0; i < n; i++) {
		int now = v[i];
		if (startingNumber + 1 == now) {
			startingNumber = now;
			continue;
		}

		startingNumber = now;
		result += now;
	}
	cout << result;
}