// https://www.acmicpc.net/problem/22966 BOJ 22966 ���� ���� ������ ã�� ���� 2024-01-15
/*
�׳� ��ȸ�ؼ� �ּҰ��� ã�Ƶ� ������, vector �� sort ������ �ϰ� �;���.
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