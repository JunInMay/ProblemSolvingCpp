// https://www.acmicpc.net/problem/30501 BOJ 30501 관공... 어찌하여 목만 오셨소... 2024-02-20
#include <iostream>

using namespace std;

int main() {
	int caseCount;
	cin >> caseCount;

	for (int i = 0; i < caseCount; i++) {
		string name;
		cin >> name;
		for (int j = 0; j < name.size(); j++) {
			if (name[j] == 'S') {
				cout << name;
				break;
			}
		}
	}
}