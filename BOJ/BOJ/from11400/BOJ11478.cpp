// https://www.acmicpc.net/problem/11478 서로 다른 부분 문자열의 개수 2023-11-25
#include <iostream>
#include <set>

using namespace std;

int main()
{
	string input;

	cin >> input;

	set<string> set;
	for (int i = 1; i <= input.size(); i++)
	{
		for (int j = 0; j + i <= input.size(); j++)
		{
			string s = input.substr(j, i);
			set.insert(s);
		}
	}

	cout << set.size();
}