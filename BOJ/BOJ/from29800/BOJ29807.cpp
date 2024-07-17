// https://www.acmicpc.net/problem/29807 BOJ 29807 학번을 찾아줘! 2024-02-23
#include <iostream>
#include <cmath>

using namespace std;

int point[5];
int a, b, c;
int main() {
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
		cin >> point[i];

	if (point[0] > point[2]) {
		a = abs(point[0] - point[2]) * 508;
	}
	else {
		a = abs(point[0] - point[2]) * 108;
	}

	if (point[1] > point[3]) {
		b = abs(point[1] - point[3]) * 212;
	}
	else {
		b = abs(point[1] - point[3]) * 305;
	}

	if (point[4] != 0) {
		c = point[4] * 707;
	}

	cout << (a + b + c) * 4763;
}