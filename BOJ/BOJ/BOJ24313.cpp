// https://www.acmicpc.net/problem/24313 알고리즘 수업 - 점근적 표기 1 BOJ 24313
#include <iostream>

using namespace std;

int main()
{
	int a1, a0;
	cin >> a1 >> a0;

	int c, n0;
	cin >> c >> n0;
	
	cout << (((c - a1) >= 0) && ((c - a1) * n0 >= a0));
}