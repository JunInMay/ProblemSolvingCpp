// https://www.acmicpc.net/problem/25869 BOJ 25869 Window on the Wall 2024-02-25
#include <iostream>

using namespace std;

int main() {
	int w, h, d;
	cin >> w >> h >> d;

	int result = (w - (2 * d)) * (h - (2 * d));
	if (w <= 2 * d || h <= 2 * d) result = 0;
	
	cout << result;
}