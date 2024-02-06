// https://www.acmicpc.net/problem/2504 BOJ 2504 °ýÈ£ÀÇ °ª 2024-02-01
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

		// openÀÌ ÀÖ´Âµ¥ ´Ù½Ã ¿­·ÈÀ» °æ¿ì´Â »õ·Î °ýÈ£°¡ »ý±ä °Í
		if (now == '(' || now == '[') {
			value += dfs();
			continue;
		}
		// °ýÈ£°¡ Àß¸ø ´ÝÇûÀ» °æ¿ì ¿¡·¯
		if ((open == '(' && now == ']') || (open == '[' && now == ')'))
			return error;

		if (!value) value = 1;
		// °ýÈ£°¡ ´ÝÇûÀ» °æ¿ì ¹ë·ù °è»ê
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
¹Ý·Ê
([)

*/