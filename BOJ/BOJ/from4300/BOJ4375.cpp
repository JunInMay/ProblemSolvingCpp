// https://www.acmicpc.net/problem/4375 1 (제목이 1임) 2023-12-01
/*
모듈로 분배법칙을 활용한다.
(A + B) % n = (A % n + B % n) % n
*/
#include <iostream>

using namespace std;

int main() {

	while (true) {
		int n;
		cin >> n;
		if (cin.eof()) break;

		int len = 1, before = 1;

		while (true) {
			if (before % n == 0) {
				cout << len << '\n';
				break;
			}
			before = ((before * 10) % n + (1 % n)) % n;
			len++;
		}
	}
}