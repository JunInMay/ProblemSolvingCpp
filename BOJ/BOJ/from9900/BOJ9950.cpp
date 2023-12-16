// https://www.acmicpc.net/problem/9950 BOJ9950 Rectangles 2023-12-16
#include <iostream>

using namespace std;

int main() {

	while (true) {
		int l, w, a;

		cin >> l >> w >> a;

		if (l == 0 && w == 0 && a == 0) break;
		if (l == 0) {
			l = a / w;
		}
		else if (w == 0) {
			w = a / l;
		}
		else if (a == 0) {
			a = l * w;
		}

		cout << l << ' ' << w << ' ' << a << '\n';
	}
}

/*
100 100 0
100 0 100
100 0 200
2 0 100
0 50 100

*/