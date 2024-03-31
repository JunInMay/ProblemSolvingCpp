// https://www.acmicpc.net/problem/12035 BOJ 123035 Dance Around The Clock (Small) 2024-03-31
/*
�������� �־��� ���� ���� �� Ÿ���� �� ���� ���ִ� ���� ���϶�� �ߴ�.

Ȧ�� ���� ���� ���� ������ �ð�������� �̵�, ¦�� ���� �ݽð�������� �̵��Ѵ�.
Ÿ���� Ȧ������ ¦������ �ȴٸ� �־��� �� ���� Ÿ���� ��ġ�� �ܼ��� ���������� �ľ��� �� �ִ�.
�̿� ���� Ÿ���� �ƴ� ��� ���� �־��� �� ������ ��ġ�� �ùķ��̼� ���� �ʾƵ� �ľ��� �� �ִ�.
*/
#include <iostream>

using namespace std;

int dancers[1000];

int main() {
	int caseCount;
	cin >> caseCount;

	for (int i = 1; i <= caseCount; i++) {
		int dancer, target, turn;
		cin >> dancer >> target >> turn;

		int targetPosition = -123;
		for (int j = 0; j < dancer; j++) {
			int direction = 1;
			if (j % 2 == 1) direction = -1;

			dancers[j] = (j + (direction * turn) + dancer * 123) % dancer;
			if (j == target - 1) targetPosition = dancers[j];
		}

		int leftPosition = (targetPosition + 1 + dancer) % dancer;
		int rightPosition = (targetPosition - 1 + dancer) % dancer;
		int left = -123, right = -123;
		for (int j = 0; j < dancer; j++) {
			if (dancers[j] == leftPosition) left = j + 1;
			if (dancers[j] == rightPosition) right = j + 1;
		}

		cout << "Case #" << i << ": " << left << " " << right << '\n';
	}
}