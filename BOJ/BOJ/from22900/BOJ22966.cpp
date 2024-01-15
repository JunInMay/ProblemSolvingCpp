// https://www.acmicpc.net/problem/22966 BOJ 22966 가장 쉬운 문제를 찾는 문제 2024-01-15
/*
그냥 순회해서 최소값을 찾아도 됐지만, vector 와 sort 연습을 하고 싶었음.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int iteration;
	cin >> iteration;

	vector<pair<int, string>> v;
	for (int i = 0; i < iteration; i++) {
		string title;
		int difficulty;
		cin >> title >> difficulty;
		v.push_back(pair<int, string>(difficulty, title));
	}

	sort(v.begin(), v.end());

	cout << v.front().second;
}