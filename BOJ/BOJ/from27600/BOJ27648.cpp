// https://www.acmicpc.net/problem/27648 2024-06-21 BOJ 27648 증가 배열 만들기
#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;

	int diagonal = n + m - 1;

	if (k < diagonal) {
		cout << "NO";
	}
	else {
		cout << "YES\n";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << i + j + 1 << ' ';
			}
			cout << '\n';
		}
	}
}

/*

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7

*/