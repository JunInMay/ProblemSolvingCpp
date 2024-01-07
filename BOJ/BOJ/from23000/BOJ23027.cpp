// https://www.acmicpc.net/problem/23027 BOJ 23027 1번부터 문제의 상태가…? 2024-01-07
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;

	int checked = 1000;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
			checked = min(checked, (int)s[i]);
		}
	}

	bool targets[6] = { 1, 1, 1, 1, 0, 1 };

	switch (checked) {
	case 'C':
		targets[2] = false;
	case 'B':
		targets[1] = false;
	case 'A':
		targets[0] = false;
		break;
	}

	if (checked == 1000) {
		for (int i = 0; i < s.size(); i++) cout << 'A';
	}
	else {
		for (int i = 0; i < s.size(); i++) {
			if (s[i] - 'A' <= 'F' - 'A' && targets[s[i] - 'A']) {
				s[i] = checked;
			}
		}
		cout << s;
	}
}