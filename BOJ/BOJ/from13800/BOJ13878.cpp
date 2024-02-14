#include <iostream>
#include <map>
#include <cmath>
#include <string>

using namespace std;

map<char, int> table = {
	{'0', 0 }, {'1', 1 }, {'2', 2 }, {'3', 3 }, {'4', 4 },
	{'5', 5 }, {'6', 6 }, {'7', 7 }, {'8', 8 }, {'9', 9 },
	{'A', 10 }, {'B', 8 }, {'C', 11 }, {'D', 12 }, {'E', 13 },
	{'F', 14 }, {'G', 11 }, {'H', 15 }, {'I', 1 }, {'J', 16 },
	{'K', 17 }, {'L', 18 }, {'M', 19 }, {'N', 20 }, {'O', 0 },
	{'P', 21 }, {'Q', 0 }, {'R', 22 }, {'S', 5 }, {'T', 23 },
	{'U', 24 }, {'V', 24 }, {'W', 25 }, {'X', 26 }, {'Y', 24 },
	{'Z', 2 },
};

int checkSumPoint[] = { 2, 4, 5, 7, 8, 10, 11, 13 };
bool checkSum(string& s) {

	int sum = 0;
	for (int i = 0; i < 8; i++) {
		char c = s[i];
		sum += table[c] * checkSumPoint[i];
	}
	
	return sum % 27 == table[s[8]];
}

string toTwentySeven(string& s) {
	long long result = 0;
	for (int i = 0; i < 8; i++) {
		result += table[s[i]] * pow(27, 7 - i);
	}

	return to_string(result);
}

int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int idx;
		string input;
		cin >> idx >> input;

		string result = "Invalid";
		if (checkSum(input)) {
			result = toTwentySeven(input);
		}

		cout << idx << " " << result << '\n';
	}
}