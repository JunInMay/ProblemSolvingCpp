// https://www.acmicpc.net/problem/18691 18691 Pokemon Buddy 2024-02-17
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int G, C, E;
		cin >> G >> C >> E;

		switch (G) {
		case 2:
			G = 3;
			break;
		case 3:
			G = 5;
		}

		int requiredCandies = (E - C) * G;
		cout << max(0, requiredCandies) << '\n';
	}
}