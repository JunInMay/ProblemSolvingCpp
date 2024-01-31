// https://www.acmicpc.net/problem/29753 BOJ 29753 최소 성적 2024-01-31
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	double X;
	cin >> N >> X;

	int point;
	double pointSum = 0;
	string gradeStr;
	double grade = 0;

	double averagePoint = 0;
	for (int i = 0; i < N - 1; i++) {
		cin >> point;
		cin >> gradeStr;

		if (gradeStr == "A+")
			grade = 4.5;
		else if (gradeStr == "A0")
			grade = 4;
		else if (gradeStr == "B+")
			grade = 3.5;
		else if (gradeStr == "B0")
			grade = 3;
		else if (gradeStr == "C+")
			grade = 2.5;
		else if (gradeStr == "C0")
			grade = 2;
		else if (gradeStr == "D+")
			grade = 1.5;
		else if (gradeStr == "D0")
			grade = 1;
		else if (gradeStr == "F")
			grade = 0;

		averagePoint += (point * grade);
		pointSum += point;
	}
	cin >> point;
	pointSum += point;
	
	double fTemp = (int)((averagePoint / pointSum) * 100);
	
	double fTest = fTemp / 100;
	cout << "fTest : " << fTest << '\n';
	if (fTest > X) {
		cout << "F";
		return 0;
	}
	//cout << (averagePoint + 4.5 * 3) / pointSum << '\n';

	double candidate = 0;
	for (double i = 2; i <= 9; i++) {
		candidate = (averagePoint + (point * (i / 2))) / pointSum;
		candidate = (int)(candidate * 100) / 1;
		candidate /= 100;
		if (candidate > X) {
			string result = "";
			switch ((int)i) {
			case 2:
				result = "D0";
				break;
			case 3:
				result = "D+";
				break;
			case 4:
				result = "C0";
				break;
			case 5:
				result = "C+";
				break;
			case 6:
				result = "B0";
				break;
			case 7:
				result = "B+";
				break;
			case 8:
				result = "A0";
				break;
			case 9:
				result = "A+";
				break;
			}
			cout << result;
			return 0;
		}
	}
	cout << "impossible";
	
}