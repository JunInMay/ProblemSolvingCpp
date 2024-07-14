// https://www.acmicpc.net/problem/16634 BOJ 16634 Run-Length Encoding, Run! 2024-07-14
#include <iostream>

using namespace std;

void addChar(string& s, char c, int times) {
	while (times-- > 0) {
		s += c;
	}
}

void addEncoded(string& target, char c, int times) {
	target += c;
	target += times + '0';
}

string encode(string& input) {
	string result = "";

	char tracking = -1;
	int count = 0;
	for (char c : input) {
		if (tracking != c) {
			if (tracking != -1) {
				addEncoded(result, tracking, count);
			}
			tracking = c;
			count = 1;
		}
		else {
			count++;
		}
	}
	addEncoded(result, tracking, count);

	return result;
}

string decode(string& input) {
	string result = "";
	bool beforeChar = false;
	char tracking = -1;

	for (char c : input) {
		if (!beforeChar) {
			tracking = c;
			beforeChar = true;
		}
		else {
			addChar(result, tracking, c - '0');
			beforeChar = false;
		}
	}

	return result;
}

int main() {
	char mode;
	string input;
	cin >> mode >> input;

	string result;
	if (mode == 'E') {
		result = encode(input);
	}
	else {
		result = decode(input);
	}

	cout << result;
}