// https://www.acmicpc.net/problem/30664 BOJ 30664 Loteria Falha 2024-05-23
/*
* 엄청나게 큰 수(30자리)를 42로 나눈 값을 구할 수 있어야 해서 문자열인 상태에서 숫자를 다룸.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	string input;

	while (true) {
		cin >> input;
		if (input.compare("0") == 0) break;
		
		while (input.length() > 8) {
			string temp = input.substr(0, 8);
			int simplified = stoi(temp) % 42;

			input = to_string(simplified).append(input.substr(8, input.length()));
		}

		string result = "TENTE NOVAMENTE";
		if (stoi(input) % 42 == 0) result = "PREMIADO";

		cout << result << '\n';
	}
}

/*
10 000 000 000 000 000 000

*/