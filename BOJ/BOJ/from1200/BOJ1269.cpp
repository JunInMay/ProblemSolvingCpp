// https://www.acmicpc.net/problem/1269 대칭 차집합 2023-11-24
/*
차집합 관련 문제. STL set 사용해보기.
*/
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a_set_length, b_set_length;
	set<int> a_set, b_set;

	cin >> a_set_length >> b_set_length;

	for (int i = 0; i < a_set_length; i++)
	{
		int value;
		cin >> value;
		a_set.insert(value);
	}

	for (int i = 0; i < b_set_length; i++)
	{
		int value;
		cin >> value;
		b_set.insert(value);
	}

	vector<int> result;
	set_difference(a_set.begin(), a_set.end(), b_set.begin(), b_set.end(), back_inserter(result));
	set_difference(b_set.begin(), b_set.end(), a_set.begin(), a_set.end(), back_inserter(result));

	cout << result.size();
}