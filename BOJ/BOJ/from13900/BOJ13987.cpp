// https://www.acmicpc.net/problem/13987 BOJ 13987 Six Sides 2024-07-09
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	vector<double> dice1;
	vector<double> dice2;

	for (int i = 0; i < 6; i++) {
		double input;
		cin >> input;
		dice1.push_back(input);
	}
	for (int i = 0; i < 6; i++) {
		double input;
		cin >> input;
		dice2.push_back(input);
	}

	double winRate = 0;
	double loseRate = 0;
	double drawRate = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (dice1[i] > dice2[j]) winRate++;
			if (dice1[i] < dice2[j]) loseRate++;
			if (dice1[i] == dice2[j]) drawRate++;
		}
	}
	winRate /= 36;
	loseRate /= 36;
	drawRate /= 36;

	cout << fixed << setprecision(5) << winRate + drawRate * (winRate / (winRate + loseRate));
}

/*
�ı�:

drawRate �ʿ� ���µ�?�� 36���� ���� �ʿ䵵 ����. �׳� (�� / �� + ��)�� �ϸ� �·��̴�.. ������ ����...
���� ������ Ȯ���� �����ؼ� ����� �����̴�.

*/