// https://www.acmicpc.net/problem/1620 BOJ 1620 나는야 포켓몬 마스터 이다솜 2023-11-22
#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	map<int, string> number_to_name;
	map<string, int> name_to_number;

	int pokemon_count = 0, query_count;

	cin >> pokemon_count >> query_count;

	for (int i = 0; i < pokemon_count; i++)
	{
		string name;
		cin >> name;

		number_to_name[i + 1] = name;
		name_to_number[name] = i + 1;
	}

	for (int i = 0; i < query_count; i++)
	{
		string query;
		cin >> query;

		if (query[0] >= 48 && query[0] <= 57)
		{
			cout << number_to_name[atoi(query.c_str())] << '\n';
		}
		else
		{
			cout << name_to_number[query] << '\n';
		}
	}
}