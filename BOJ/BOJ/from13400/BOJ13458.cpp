// https://www.acmicpc.net/problem/13458 BOJ 13458 시험 감독 2023-12-19
#include <iostream>
#include <cmath>

using namespace std;

int class_rooms[1000000];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int class_count;
	cin >> class_count;

	for (int i = 0; i < class_count; i++) {
		int people;
		cin >> people;
		class_rooms[i] = people;
	}

	int m, s;
	cin >> m >> s;
	long long result = class_count;
	for (int i = 0; i < class_count; i++) {
		int people = class_rooms[i];
		people -= m;
		if (people > 0) {
			result += ceil((double) people / s);
		}
	}
	cout << result;
}