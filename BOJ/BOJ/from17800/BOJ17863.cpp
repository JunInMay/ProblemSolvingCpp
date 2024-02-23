// https://www.acmicpc.net/problem/17863 BOJ 17863 FYI 2024-02-21
#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	string result = "NO";
	if (number / 10000 == 555) result = "YES";

	cout << result;
}