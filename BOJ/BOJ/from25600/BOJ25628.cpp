// https://www.acmicpc.net/problem/25628 231115 �ܹ��� �����
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int bun_count, patty_count;

	cin >> bun_count >> patty_count;

	cout << min(bun_count / 2, patty_count);
}