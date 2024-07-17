// https://www.acmicpc.net/problem/15686 치킨 배달 BOJ 15686 2023-12-13
/*
조합을 dfs 로 구현
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int resy[13], resx[13];
int distances[100][13];
int N, M;
int store_idx = 0;
bool checked[13];
vector<pair<int, int>> houses;
int result = 100000;

void dfs(int start, int selected) {
	if (selected == M) {
		int temp_sum = 0;
		for (int i = 0; i < houses.size(); i++) {
			int min_distance = 200;
			for (int j = 0; j < store_idx; j++) {
				if (checked[j]) {
					min_distance = min(min_distance, distances[i][j]);
				}
			}
			temp_sum += min_distance;
		}
		result = min(result, temp_sum);
	}

	for (int i = start; i < store_idx; i++) {
		selected += 1;
		checked[i] = 1;

		dfs(i + 1, selected);

		selected -= 1;
		checked[i] = 0;
	}
}

int main() {

	cin >> N >> M;


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int input;
			cin >> input;

			if (input == 2) {
				resy[store_idx] = i;
				resx[store_idx] = j;
				store_idx += 1;
			}
			else if (input == 1) {
				houses.push_back(pair<int, int>(i, j));
			}
		}
	}

	for (int i = 0; i < houses.size(); i++) {
		for (int j = 0; j < store_idx; j++) {
			pair<int, int> house = houses[i];
			distances[i][j] = abs(house.first - resy[j]) + abs(house.second - resx[j]);
		}
	}

	dfs(0, 0);

	cout << result;
}


/*
5 1
1 0 0 0 0
0 2 0 0 0
0 0 0 0 0
0 0 0 0 0
2 0 0 0 0

*/