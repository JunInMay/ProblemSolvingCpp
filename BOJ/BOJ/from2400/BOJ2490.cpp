// https://www.acmicpc.net/problem/2490 BOJ 2490 ¿∑≥Ó¿Ã 2023-12-25
#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		int tail = 0;
		for (int j = 0; j < 4; j++) {
			int n;
			cin >> n;
			if (n) ++tail;
		}

		char result = 'E';
		if (tail == 0) result = 'D';
		else if (tail == 3) result = 'A';
		else if (tail == 2) result = 'B';
		else if (tail == 1) result = 'C';

		cout << result << '\n';
	}
}