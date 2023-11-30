// https://www.acmicpc.net/problem/28352 BOJ 28352 10!
#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int result = 6;
	for (int i = 11; i <= N; i++)
	{
		result *= i;
	}

	cout << result;
}