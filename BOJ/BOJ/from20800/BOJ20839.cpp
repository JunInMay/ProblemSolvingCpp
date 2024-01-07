// https://www.acmicpc.net/problem/20839 Betygsättning BOJ 20839 2024-01-06
#include <iostream>

using namespace std;

int main() {
	double sa, sc, se;
	cin >> sa >> sc >> se;

	double a, c, e;
	cin >> a >> c >> e;

	char result = 'E';
	if (a >= sa && c >= sc && e >= se) result = 'A';
	else if (a >= sa / 2 && c >= sc && e >= se) result = 'B';
	else if (c >= sc && e >= se) result = 'C';
	else if (c >= sc / 2 && e >= se) result = 'D';

	cout << result;
}