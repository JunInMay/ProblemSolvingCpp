// https://www.acmicpc.net/problem/1735 BOJ 1735 ºÐ¼ö ÇÕ 2023-11-27
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

int main()
{
	int a1, b1, a2, b2;

	cin >> a1 >> b1 >> a2 >> b2;

	int tmp = b1;
	a1 *= b2;
	b1 *= b2;
	a2 *= tmp;
	b2 *= tmp;

	a1 += a2;

	int gcd_ = gcd(a1, b1);

	cout << a1 / gcd_ << " " << b1 / gcd_;
	
}

/*
2 7
3 5

*/