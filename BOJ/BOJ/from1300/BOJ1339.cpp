// https://www.acmicpc.net/problem/1339 BOJ 1339 단어 수학 2023-12-27
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

bool compare(pair<char, int> left, pair<char, int> right) {
	return right.second < left.second;
}

int main() {
	int word_count;
	map<char, int> weightings;
	map<char, int> char_countings;
	int char_count = 0;

	cin >> word_count;

	for (int i = 0; i < word_count; i++) {
		string word;
		cin >> word;

		for (int i = 0; i < word.size(); i++) {
			char c = word[i];
			int weighting = pow(10, word.size() - i - 1);

			if (weightings.find(c) == weightings.end()) {
				weightings[c] = weighting;
				char_countings[c] = 1;
				++char_count;
			}
			else {
				weightings[c] += weighting;
				char_countings[c] += 1;
			}
		}
	}

	vector<pair<char, int>> v(weightings.begin(), weightings.end());
	sort(v.begin(), v.end(), compare);
	int number = 9;
	int result = 0;
	for (int i = 0; i < v.size(); i++) {
		result += v[i].second * (number--);
	}
	cout << result << '\n';
}