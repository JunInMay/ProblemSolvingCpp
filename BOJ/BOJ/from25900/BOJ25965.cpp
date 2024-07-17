// https://www.acmicpc.net/problem/25965 BOJ 25965 미션 도네이션 2023-12-11
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int game_count;
	cin >> game_count;

	for (int i = 0; i < game_count; i++) {
		int mission_count;
		cin >> mission_count;

		long long* kills = new long long[mission_count];
		long long* deaths = new long long[mission_count];
		long long* assists = new long long[mission_count];
		for (int j = 0; j < mission_count; j++) {
			cin >> kills[j] >> deaths[j] >> assists[j];
		}

		int kill, death, assist;
		cin >> kill >> death >> assist;

		long long result = 0;
		for (int j = 0; j < mission_count; j++) {
			long long temp = 0;
			temp += kill * kills[j];
			temp -= death * deaths[j];
			temp += assist * assists[j];

			if (temp < 0) temp = 0;
			result += temp;
		}
		delete[] kills, deaths, assists;

		cout << result << '\n';
	}
}