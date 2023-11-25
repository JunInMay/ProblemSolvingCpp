// https://www.acmicpc.net/problem/1764 BOJ 1764 µË∫∏¿‚ 2023-11-23
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a_count, b_count;
	set<string> a_set, b_set;

	cin >> a_count >> b_count;

	for (int i = 0; i < a_count; i++)
	{
		string value;
		cin >> value;
		a_set.insert(value);
	}

	for (int i = 0; i < b_count; i++)
	{
		string value;
		cin >> value;
		b_set.insert(value);
	}

	vector<string> intersection;
	set_intersection(a_set.begin(), a_set.end(), b_set.begin(), b_set.end(), back_inserter(intersection));

	cout << intersection.size() << '\n';
	for (string e : intersection)
	{
		cout << e << '\n';
	}
}