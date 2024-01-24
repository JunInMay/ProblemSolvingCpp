// https://www.acmicpc.net/problem/2631 BOJ 2631 줄세우기 2024-01-24
/*
https://namu.wiki/w/%EC%B5%9C%EC%9E%A5%20%EC%A6%9D%EA%B0%80%20%EB%B6%80%EB%B6%84%20%EC%88%98%EC%97%B4
최장 증가 부분 수열 O(N^2) 알고리즘으로 해결.
*/
#include <iostream>
#include <cmath>

using namespace std;

int arr[201];
int memo[201];

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	int lisSize = -1;
	for (int i = 1; i <= N; i++) {
		int tempMax = -1;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] < arr[i])
				tempMax = max(tempMax, memo[j] + 1);
		}
		memo[i] = tempMax;
		lisSize = max(lisSize, memo[i]);
	}

	cout << N - lisSize << '\n';
}
