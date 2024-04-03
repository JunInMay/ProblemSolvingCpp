// https://www.acmicpc.net/problem/10180 BOJ 10180 Ship Selection 2024-04-03
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++) {
		int shipCount;
		double distance;
		cin >> shipCount >> distance;

		int result = 0;
		for (int j = 0; j < shipCount; j++) {
			double v, f, c;
			cin >> v >> f >> c;

			if (f - distance / v * c >= 0) result++;
		}

		cout << result << '\n';
	}
}