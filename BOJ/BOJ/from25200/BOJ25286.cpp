// https://www.acmicpc.net/problem/25286 2024-12-18 BOJ 25286 11월 11일
#include <iostream>

using namespace std;

bool isLeap(int& y) {
  if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) return true;
  return false;
}

int lastDay[13] = {
  0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int y, m;
    cin >> y >> m;
    int d = m;

    if (m == 1) {
      m = 12;
      y -= 1;
    } else {
      m -= 1;
    }

    d = lastDay[m];
    if (isLeap(y) && m == 2) {
      d += 1;
    }

    cout << y << " " << m << " " << d << '\n';
  }
}