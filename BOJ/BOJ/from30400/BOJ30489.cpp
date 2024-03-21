// https://www.acmicpc.net/problem/30489 BOJ 30489 apt upgrade 2024-03-21
#include <iostream>
#include <algorithm>

using namespace std;

long long packages[100001];

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	m = m + k;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> packages[i];
		sum += packages[i];
	}

	sort(packages, packages + 100001, [](int a , int b) {
		return a > b;
		});

	long long downloaded = 0;
	for (int i = 0; i < m; i++) {
		downloaded += packages[i];
	}

	cout << (double)downloaded / sum * 100;
}