// https://www.acmicpc.net/problem/13752 BOJ 13752 히스토그램 2023-12-30
#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int case_count;
	cin >> case_count;

	for (int i = 0; i < case_count; i++) {
		int size;
		cin >> size;
		for (int j = 0; j < size; j++) {
			cout << '=';
		}
		cout << '\n';
	}
}