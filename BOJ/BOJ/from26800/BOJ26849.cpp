// https://www.acmicpc.net/problem/26849 2024-04-09 Non Classical Problem
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int numberCount;
	cin >> numberCount;

	double minResult = 10000000001, maxResult = -1, sumResult = 0;
	for (int i = 0; i < numberCount; i++) {
		double numerator, denominator;
		cin >> numerator >> denominator;

		minResult = min(minResult, numerator / denominator);
		maxResult = max(maxResult, numerator / denominator);
		sumResult += numerator / denominator;
	}

	cout << fixed << setprecision(6) << minResult << " " << maxResult << " " << sumResult;
}