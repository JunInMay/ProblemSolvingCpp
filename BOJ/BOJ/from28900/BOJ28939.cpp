// https://www.acmicpc.net/problem/28939 BOJ 28939 ¬º¬Ü¬Ñ¬æ ¬Õ¬Ý¬ñ ¬à¬Ò¬å¬Ó¬Ú 2024-06-25
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, k, m1, m2;
	cin >> n >> k >> m1 >> m2;

	int result = 0;
	for (int i = 0; i < n; i++) {
		int closetHeight, shoes;
		cin >> closetHeight >> shoes;

		for (int j = 0; j < shoes; j++) {
			long long size;
			cin >> size;

			long long minHeight = size * m2;
			long long maxHeight = size * m1;

			if (!(minHeight <= closetHeight * k && closetHeight <= maxHeight)) result++;
		}
	}

	cout << result;
}