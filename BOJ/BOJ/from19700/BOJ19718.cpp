//https://www.acmicpc.net/problem/19718 BOJ 19718 King's Inspection 2024-03-06
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int arr[3] = { };
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3, greater<int>());
	int highest = arr[0], mid = arr[1], lowest = arr[2];

	int result = 0;

	result += highest - mid;
	lowest += highest - mid;
	mid = highest;

	int diff = highest - lowest;
	result += diff * 2;

	cout << result;
}