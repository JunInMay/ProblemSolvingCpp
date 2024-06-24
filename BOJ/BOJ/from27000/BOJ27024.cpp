// https://www.acmicpc.net/problem/27024 BOJ 27024 2024-06-24 Fence Height
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> v;

	for (int i = 0; i < n; i++) {
		int preference;
		cin >> preference;

		v.push_back(preference);
	}

	sort(v.begin(), v.end());

	int majority = n / 2 + 1;
	int minDifference = 10001;
	for (int i = 0; i <= n - majority; i++) {
		int lower = v[i];
		int higher = v[i + majority - 1];

		minDifference = min(minDifference, higher - lower);
	}

	cout << minDifference;
}

// USA Computing Olympiad 2003-0224 USACO March 2004 Contest Blue 3