// https://www.acmicpc.net/problem/27325 BOJ 27325 3 つの箱 (Three Boxes) 2024-01-08
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int l;
	string s;
	cin >> l >> s;

	int box = 1;
	int result = 0;
	for (int i = 0; i < l; i++) {
		int target = 0;
		if (s[i] == 'L') {
			target = max(box - 1, 1);
		}
		else {
			target = min(box + 1, 3);
		}
		if (target == 3) ++result;
		box = target;
	}

	cout << result;
}