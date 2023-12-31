// https://www.acmicpc.net/problem/17094 Serious Problem BOJ 17094 2023-12-31
#include <iostream>

using namespace std;

int main() {
	int length;
	string input;
	cin >> length >> input;

	int two = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) == '2') ++two;
	}
	int e = length - two;

	string result = "e";
	if (two == e)
		result = "yee";
	else if (two > e)
		result = "2";

	cout << result;
}