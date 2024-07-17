// https://www.acmicpc.net/problem/31281 BOJ 31281 ЗЛАТНАТА СРЕДА 2024-01-30
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long long arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	sort(&arr[0], &arr[3]);

	cout << arr[1];
}