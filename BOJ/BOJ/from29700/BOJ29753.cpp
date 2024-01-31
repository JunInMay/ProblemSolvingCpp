// https://www.acmicpc.net/problem/29753 BOJ 29753 최소 성적 2024-01-31
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	double X;
	cin >> N >> X;
	X *= 100;
	X = (int)X;

	int point;
	double pointSum = 0;
	string gradeStr;
	double grade = 0;

	double averagePoint = 0;
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

		averagePoint += (point * grade);
		pointSum += point;
	}
	cout << "av, pointSum : " << averagePoint << " " << pointSum << '\n';
	cin >> point;
	pointSum += point;

}