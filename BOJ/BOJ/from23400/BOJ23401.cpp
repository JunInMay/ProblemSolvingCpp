// https://www.acmicpc.net/problem/23401 BOJ 23401 Ljeto 2024-06-27
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int latestTime[10];

int main() {
	int n;
	cin >> n;
	fill(latestTime, latestTime + 10, -10000);
	
	int left = 0, right = 0;

	for (int i = 0; i < n; i++) {
		int t, from, to;
		cin >> t >> from >> to;

		int point = 100;
		if (abs(latestTime[from] - t) <= 10) point += 50;

		latestTime[from] = t;
		if (from / 5) right += point;
		else left += point;
	}

	cout << left << " " << right;
}

/*
3
1 1 5
2 1 5
3 1 5


*/