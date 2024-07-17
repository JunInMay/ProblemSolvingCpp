// https://www.acmicpc.net/problem/25642 BOJ 25642 젓가락 게임 2024-04-16
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	string result = "yt";
	if (a + b >= 5) {
		result = "yt";
	}
	else if (a + b + a >= 5) {
		result = "yj";
	}

	cout << result;
}