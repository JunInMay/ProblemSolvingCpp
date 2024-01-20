#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= 101; i++) {
		if (1 + i + i * i == n) {
			cout << i;
			break;
		}
	}
}

/*
1 개 터지고
1 * N 개 터지고
1 * N * N 개 터지

1 + N + N^2 = N
K^2 + K + 1 = N


*/