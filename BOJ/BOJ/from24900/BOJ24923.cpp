// https://www.acmicpc.net/problem/24923 Canadians, eh? BOJ 24923 2023-12-26
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);

	string result = "Imposter!";
	if (str.size() >= 3) {
		if (str.substr(str.size() - 3, 3).compare("eh?") == 0) {
			result = "Canadian!";
		}
	}
	cout << result;
}