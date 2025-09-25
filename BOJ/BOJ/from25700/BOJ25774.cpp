// https://www.acmicpc.net/problem/25774 2025-09-25 BOJ 25774 Simplified Calendar System
#include <iostream>

using namespace std;

int main() {
  int d, m, y, s;
  int dd, mm, yy, ss;
  cin >> d >> m >> y >> s >> dd >> mm >> yy;

  int date = d + m * 30 + y * 360;
  int datee = dd + mm * 30 + yy * 360;

  int diff = datee - date;
  cout << (s + diff - 1) % 7 + 1;
}

/*

20 11 2021 7
21 11 2021

*/