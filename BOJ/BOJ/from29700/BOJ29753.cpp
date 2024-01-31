// https://www.acmicpc.net/problem/29753 BOJ 29753 최소 성적 2024-01-31
/*
쉬운 줄 알았는데 골치 아팠던 문제.
(int)(0.9 * 100) 하면 90이 나올 줄 알았는데 89가 나온다.
나머지는 소수점 세자리 수 버림 계산을 편하게 하기 위해 100을 곱해서 처리.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	double xInput;
	cin >> N >> xInput;
	int X = round(xInput * 100); // 여기가 문제.

	int point;
	int pointSum = 0;
	string gradeStr;
	int grade = 0;
	int averageTempPoint = 0;
	for (int i = 0; i < N - 1; i++) {
		cin >> point;
		cin >> gradeStr;

		if (gradeStr == "A+")
			grade = 450;
		else if (gradeStr == "A0")
			grade = 400;
		else if (gradeStr == "B+")
			grade = 350;
		else if (gradeStr == "B0")
			grade = 300;
		else if (gradeStr == "C+")
			grade = 250;
		else if (gradeStr == "C0")
			grade = 200;
		else if (gradeStr == "D+")
			grade = 150;
		else if (gradeStr == "D0")
			grade = 100;
		else if (gradeStr == "F")
			grade = 0;

		averageTempPoint += (point * grade);
		pointSum += point;
	}
	cin >> point;
	pointSum += point;
	cout << "X , pointSUm : " << X << " " << pointSum << '\n';

	int fCheck = averageTempPoint / pointSum;
	if (fCheck > X) {
		cout << "F";
		return 0;
	}

	for (int i = 100; i <= 450; i += 50) {
		int nowGrade = i;
		cout << "now : " << nowGrade << '\n';
		int nowSum = averageTempPoint + nowGrade * point;
		int nowAverage = nowSum / pointSum;
		cout << " nowAver , X : " << nowAverage << " " << X << '\n';
		if (nowAverage > X) {
			string result = "";
			switch (i) {
			case 100:
				result = "D0";
				break;
			case 150:
				result = "D+";
				break;
			case 200:
				result = "C0";
				break;
			case 250:
				result = "C+";
				break;
			case 300:
				result = "B0";
				break;
			case 350:
				result = "B+";
				break;
			case 400:
				result = "A0";
				break;
			case 450:
				result = "A+";
				break;
			}

			cout << result;
			return 0;
		}
	}
	cout << "impossible";
}

/*
4 4.45
3 A+
3 A+
3 A+
1


*/