// https://www.acmicpc.net/problem/31280 BOJ 31280 ¬¶¬¡¬¬¬ª¬² 2024-03-07
#include <iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int s = a + b + c + d;
	int m = min(min(a, b), min(c, d));
	cout << s - m + 1;
}