// https://www.acmicpc.net/problem/4504 BOJ 4504 배수 찾기 2024-01-14
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	while (1) {
		int number;
		cin >> number;

		if (number == 0) break;

		string _not = "";
		if (number % n != 0) _not = "NOT ";
		cout << number << " is " << _not << "a multiple of " << n << ".\n";
	}
}