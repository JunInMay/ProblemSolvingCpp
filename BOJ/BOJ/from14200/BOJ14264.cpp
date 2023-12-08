// https://www.acmicpc.net/problem/14264 Á¤À°°¢Çü°ú »ï°¢Çü 2023-12-08
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int L;
	cin >> L;

	double result = (sqrt(3) * L * L) / 4;

	cout.precision(10);
	cout << result;
}
