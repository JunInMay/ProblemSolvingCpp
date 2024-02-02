// https://www.acmicpc.net/problem/2504 BOJ 2504 ��ȣ�� �� 2024-02-01
#include <iostream>
#include <cmath>

using namespace std;

int idx;
int inputSize;
string input;
int error = -10000;

int dfs() {
	char open = 0;
	int value = 0;
	int result = 0;
	while (true) {
		if (idx >= inputSize) return error;
		char now = input[idx];
		if (open == 0) {
			if (now == ')' || now == ']') {
				idx++;
				return error;
			}
			open = input[idx++];
			continue;
		}

		// open�� �ִµ� �ٽ� ������ ���� ���� ��ȣ�� ���� ��
		if (now == '(' || now == '[') {
			value += dfs();
			continue;
		}
		// ��ȣ�� �߸� ������ ��� ����
		if ((open == '(' && now == ']') || (open == '[' && now == ')'))
			return error;

		if (!value) value = 1;
		// ��ȣ�� ������ ��� ��� ���
		int bracketScore = 2;
		if (now == ')') 
			bracketScore = 2;
		if (now == ']') 
			bracketScore = 3;

		result += value * bracketScore;
		idx++;
		open = 0;
		value = 0;
		return result;
	}
}

int main() {
	idx = 0;
	cin >> input;
	inputSize = input.size();

	int result = 0;
	while (idx < inputSize) {
		result += dfs();
	}
	result = max(result, 0);
	cout << result << '\n';
	system("pause");
}
/*
https://www.acmicpc.net/board/view/42873
�ݷ�
([)

*/