// https://www.acmicpc.net/problem/5345 BOJ 5345 PLU Count 2024-02-02
#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;

	cin.ignore();
	for (int i = 0; i < N; i++) {
		string input;
		getline(cin, input);
		
		char progress = 0;
		int result = 0;
		for (int j = 0; j < input.size(); j++) {
			char now = input[j];

			if ((now == 'p' || now == 'P') && progress == 0)
				progress = 'p';

			if ((now == 'l' || now == 'L') && progress == 'p')
				progress = 'l';

			if ((now == 'u' || now == 'U') && progress == 'l') {
				progress = 0;
				result++;
			}
		}

		cout << result << '\n';
	}
	
}