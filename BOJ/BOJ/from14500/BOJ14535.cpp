// https://www.acmicpc.net/problem/14535 BOJ 14535 Birthday Graph 2024-01-11
#include <iostream>
#include <algorithm>

using namespace std;

string months[] = {
	"Jan:",
	"Feb:",
	"Mar:",
	"Apr:",
	"May:",
	"Jun:",
	"Jul:",
	"Aug:",
	"Sep:",
	"Oct:",
	"Nov:",
	"Dec:"
};

int main() {
	int idx = 0;
	while (++idx) {
		int iteration;
		cin >> iteration;
		if (!iteration) break;

		int birthdays[12];
		fill(birthdays, birthdays + 12, 0);
		for (int i = 0; i < iteration; i++) {
			int day, month, year;
			cin >> day >> month >> year;

			++birthdays[month - 1];
		}

		cout << "Case #" << idx << ":\n";
		for (int i = 0; i < 12; i++) {
			cout << months[i];
			for (int j = 0; j < birthdays[i]; j++) {
				cout << '*';
			}
			cout << '\n';
		}
	}
}