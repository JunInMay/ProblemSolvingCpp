// https://www.acmicpc.net/problem/15080 BOJ 15080 Every Second Counts 2024-02-14
#include <iostream>

using namespace std;

int main() {
	int fH, fM, fS, tH, tM, tS; // from, to
	char trash;
	cin >> fH;
	cin >> trash;
	cin >> fM;
	cin >> trash;
	cin >> fS;

	cin >> tH;
	cin >> trash;
	cin >> tM;
	cin >> trash;
	cin >> tS;

	int from = fS + fM * 60 + fH * 60 * 60;
	int to = tS + tM * 60 + tH * 60 * 60;

	if (to < from) to += 24 * 60 * 60;

	cout << to - from;
}