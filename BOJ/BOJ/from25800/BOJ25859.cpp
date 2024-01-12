// https://www.acmicpc.net/problem/25859 BOJ 25859 Sort by Frequency 2024-01-09
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<char, int>> characters;

bool cpare(pair<char, int> left, pair<char, int> right) {
	if (left.second == right.second) {
		return left.first < right.first;
	}
	return left.second > right.second;
}

int main() {
	string input;
	cin >> input;

	for (int i = 0; i < 26; i++) {
		char target = 'a' + i;
		pair<char, int> p(target, 0);
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == target) ++p.second;
		}
		characters.push_back(p);
	}

	sort(characters.begin(), characters.end(), cpare);

	for (int i = 0; i < characters.size(); i++) {
		for (int j = 0; j < characters[i].second; j++) {
			cout << characters[i].first;
		}
	}
}