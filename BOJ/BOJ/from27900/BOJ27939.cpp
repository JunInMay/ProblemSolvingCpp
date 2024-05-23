// https://www.acmicpc.net/problem/27939 2024-05-16 BOJ 27939 가지 교배
#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	char *eggplants = new char[n];

	for (int i = 0; i < n; i++) {
		cin >> eggplants[i];
	}

	int m, k;
	cin >> m >> k;

	// true = white, false = purple
	bool isWhite = false;

	for (int i = 0; i < m; i++) {
		bool assistant = true;
		for (int j = 0; j < k; j++) {
			int idx; // eggplantIndex
			cin >> idx;
			idx -= 1;
			
			if (eggplants[idx] == 'P') assistant = assistant && false;
		}

		isWhite = isWhite || assistant;
	}

	string result = "P";
	if (isWhite) result = "W";

	cout << result;
	delete[] eggplants;
}

/*
4
P P W W
3 2
1 2
2 3
3 4
*/
