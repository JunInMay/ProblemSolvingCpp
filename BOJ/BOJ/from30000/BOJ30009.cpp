// https://www.acmicpc.net/problem/30009 BOJ 30009 포지션 제로 2024-01-16
#include <iostream>

using namespace std;

int main() {
	int n, x, y, r;
	cin >> n >> x >> y >> r;

	int border = 0, inner = 0;
	while (n--) {
		int l;
		cin >> l;

		if (l > x - r && l < x + r) {
			++inner;
		}
		else if (l == x - r || l == x + r) {
			++border;
		}
	}

	cout << inner << " " << border;
}