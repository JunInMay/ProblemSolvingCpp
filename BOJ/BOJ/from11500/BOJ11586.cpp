// https://www.acmicpc.net/problem/11586 BOJ 11586 지영 공주님의 마법 거울
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int line_count;
	cin >> line_count;

	vector<string> board;
	for (int i = 0; i < line_count; i++)
	{
		string line;
		cin >> line;
		board.push_back(line);
	}

	int command;
	cin >> command;

	switch (command)
	{
	case 1:
		for (string line : board)
		{
			cout << line << '\n';
		}
		break;
	case 2:
		for (string line : board)
		{
			for (int i = line.length() - 1; i >= 0; i--)
			{
				cout << line[i];
			}
			cout << '\n';
		}
		break;
	case 3:
		for (int i = board.size() - 1; i >= 0; i--)
		{
			cout << board.at(i) << '\n';
		}
		break;
	default :
		break;
	}
}