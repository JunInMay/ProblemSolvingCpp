// https://www.acmicpc.net/problem/27849 BOJ 27849 Hungry Cow 2024-04-04
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	long long supplyDaysCount, measuringCount;
	cin >> supplyDaysCount >> measuringCount;

	long long latestSupplyDate = 0, currentHaybales = 0;
	long long result = 0;
	for (int i = 0; i < supplyDaysCount + 1; i++) {
		long long supplyDate = measuringCount + 1, haybales = 0;

		if (i < supplyDaysCount) 
			cin >> supplyDate >> haybales;

		long long starvingDays = supplyDate - latestSupplyDate;
		long long eatenHaybales = min(currentHaybales, starvingDays);
		result += eatenHaybales;
		currentHaybales -= eatenHaybales;
		latestSupplyDate = supplyDate;
		currentHaybales += haybales;
	}

	cout << result;
}