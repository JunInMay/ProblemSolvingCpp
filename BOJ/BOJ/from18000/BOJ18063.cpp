// https://www.acmicpc.net/problem/18063 BOJ 18063 Jazz Enthusiast 2024-01-26
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, c;
	cin >> n >> c;

	int total = 0;
	for (int i = 0; i < n; i++) {
		string inputString;
		cin >> inputString;

		int m = inputString[0] - '0';
		int s = (inputString[2] - '0') * 10 + inputString[3] - '0';
		
		total += m * 60 + s;
	}

	total -= (n - 1) * c;
	int hour = total / 3600;
	total %= 3600;
	int minute = total / 60;
	total %= 60;
	int second = total;

	string buf = "";
	if (hour < 10) {
		buf = "0";
	}
	cout << buf + to_string(hour) << ":";

	buf = "";
	if (minute < 10) {
		buf = "0";
	}
	cout << buf + to_string(minute) << ":";
	
	buf = "";
	if (second < 10) {
		buf = "0";
	}
	cout << buf + to_string(second);
}