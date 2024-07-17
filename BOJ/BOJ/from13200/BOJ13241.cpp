// https://www.acmicpc.net/problem/13241 최소공배수 2023-11-26
#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
		return a;

	return gcd(b, a % b);
}

int main()
{
	long long a, b;
	cin >> a >> b;

	long long gcd_ = gcd(a, b);

	cout << a * b / gcd_;
}