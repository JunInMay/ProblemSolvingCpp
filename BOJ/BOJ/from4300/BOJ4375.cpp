// https://www.acmicpc.net/problem/4375 1 (������ 1��) 2023-12-01
/*
���� �й��Ģ�� Ȱ���Ѵ�.
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