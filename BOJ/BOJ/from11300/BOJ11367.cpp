// https://www.acmicpc.net/problem/11367 BOJ 11367 Report Card Time 202-12-18
#include <iostream>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int iteration;

	cin >> iteration;

	while (iteration--) {
		string name;
		int score;
		string grade = "F";
		cin >> name >> score;

		if (score >= 97) grade = "A+";
		else if (score >= 90) grade = "A";
		else if (score >= 87) grade = "B+";
		else if (score >= 80) grade = "B";
		else if (score >= 77) grade = "C+";
		else if (score >= 70) grade = "C";
		else if (score >= 67) grade = "D+";
		else if (score >= 60) grade = "D";

		cout << name << ' ' << grade << '\n';
	}
}
