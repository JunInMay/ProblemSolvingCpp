// https://www.acmicpc.net/problem/2485 가로수 2023-11-28
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int main()
{
	int tree_count;
	vector<long long> gaps;

	cin >> tree_count;

	int before = -1;
	for (int i = 0; i < tree_count; i++)
	{
		int value;
		cin >> value;

		if (before < 0)
		{
			before = value;
			continue;
		}

		gaps.push_back(value - before);
		before = value;
	}

	int gcd_ = -1;
	for (int i = 0; i < gaps.size(); i++)
	{
		int gap = gaps[i];

		if (gcd_ < 0)
		{
			gcd_ = gap;
			continue;
		}

		gcd_ = gcd(gcd_, gap);
		before = gap;
	}

	int result = 0;
	for (int i = 0; i < gaps.size(); i++)
	{
		int gap = gaps[i];

		result += (gap / gcd_) - 1;
	}

	cout << result;
}
