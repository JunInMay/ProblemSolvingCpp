// https://www.acmicpc.net/problem/24867 BOJ 24867 ¬¥¬Ó¬Ñ ¬ã¬ä¬Ñ¬ß¬Ü¬Ñ 2024-03-03
#include <iostream>

using namespace std;

long long t;
long long a, x, b, y;

long long maxLL(long long a, long long b) {
	if (a > b) return a;
	return b;
}

int main() {
	cin >> t >> a >> x >> b >> y;

	long long result = 0;
	result = maxLL(result, maxLL(0, (t - a)) * x + maxLL(0, (t - a - b) * y));
	result = maxLL(result, maxLL(0, (t - b)) * y + maxLL(0, (t - a - b) * x));

	cout << result;
}

/*

10
0 9
0 8

10
0 8
0 9



15
5 5
5 6

20
19 2
19 4

20
22 1
23 5

1000000000
0 1000000000
1 1000000000

5
4 50
4 50

*/