// https://www.acmicpc.net/problem/11866 요세푸스 문제 0 2023-12-07
#include <iostream>
#include <queue>

using namespace std;

int main() {
	int people, elimination;

	cin >> people >> elimination;

	queue<int> q;
	for (int i = 0; i < people; i++) {
		q.push(i + 1);
	}
	cout << '<';
	while (!q.empty()) {
		for (int i = 0; i < elimination - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1)
			cout << ", ";
		q.pop();
	}
	cout << '>';
}