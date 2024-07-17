// https://www.acmicpc.net/problem/27333 BOJ 27333 JOI エディタ (JOI Editor) 2024-03-02
#include <iostream>

using namespace std;

int main() {
	int size;
	cin >> size;

	string input;
	cin >> input;
	int before = 0;
	for (int i = 0; i < size; i++) {
		int now = input[i];

		if (now == before) {
			char o = (char)(now - 'a' + 'A');
			cout << o << o;
			before = 0;
		}
		else if (before == 0) {
			before = now;
		}
		else {
			cout << (char)before;
			before = now;
		}
	}
	if (before != 0)
		cout << (char)before;
}