// https://www.acmicpc.net/problem/12035 BOJ 123035 Dance Around The Clock (Small) 2024-03-31
/*
문제에서 주어진 턴이 지난 후 타겟의 양 옆에 서있는 댄서를 구하라고 했다.

홀수 댄서는 턴이 지날 때마다 시계방향으로 이동, 짝수 댄서는 반시계방향으로 이동한다.
타겟이 홀수인지 짝수인지 안다면 주어진 턴 이후 타겟의 위치를 단순히 수학적으로 파악할 수 있다.
이에 따라 타겟이 아닌 모든 댄서도 주어진 턴 이후의 위치를 시뮬레이션 하지 않아도 파악할 수 있다.
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