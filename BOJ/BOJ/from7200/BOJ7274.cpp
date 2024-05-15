// https://www.acmicpc.net/problem/7274 BOJ 7274 Liftas 2024-05-15
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int left, int right) {
	if (left > right) return true;
	return false;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;

	vector<int> stairs;
	for (int i = 0; i < n; i++) {
		int stair;
		cin >> stair;

		stairs.push_back(stair);
	}

	sort(stairs.begin(), stairs.end(), compare);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i < k) continue;
		sum += stairs[i];
	}

	cout << sum;
}