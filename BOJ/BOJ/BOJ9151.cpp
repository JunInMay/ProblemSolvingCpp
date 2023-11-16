// https://www.acmicpc.net/problem/9151 BOJ 9151 Starship Hakodate-maru
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int max_ball = 151200;
	int cubic_capacity = ceil(cbrt(max_ball));
	int tetrahedra_capacity = ceil(cbrt(max_ball * 6));

	while (true) {
		int fuel_ball_count;
		cin >> fuel_ball_count;

		if (fuel_ball_count == 0)
			break;

		int max = -1;
		for (int i = 0; i < cubic_capacity; i++)
		{
			for (int j = 0; j < tetrahedra_capacity; j++)
			{
				int now = (i * i * i) + (j * (j + 1) * (j + 2)) / 6;
				if (now > max && now <= fuel_ball_count)
				{
					max = now;
				}
			}
		}
		cout << max << '\n';
	}
}