// https://www.acmicpc.net/problem/2164 Ä«µå2 2023-12-06
#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> q;

	int card_count;
	cin >> card_count;

	for (int i = 0; i < card_count; i++) {
		q.push(i + 1);
	}

	for (; q.size() != 1;) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();
}