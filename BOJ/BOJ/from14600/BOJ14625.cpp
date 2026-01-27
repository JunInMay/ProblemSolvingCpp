// https://www.acmicpc.net/problem/14625 2026-01-27 BOJ 14625 냉동식품
#include <iostream>

using namespace std;

int getMinutes(int h, int m) {
  return h * 60 + m;
}

bool isIncluding(int h, int c) {
  bool result = false;
  if (c == 0) {
    if (h < 10) result = true;
  }

  while(h > 0) {
    if (h % 10 == c) result = true;
    h /= 10;
  } 

  return result;
}

int main() {
  int hStart, mStart, hEnd, mEnd, n;
  cin >> hStart >> mStart >> hEnd >> mEnd >> n;

  int result = 0;
  while (getMinutes(hStart, mStart) <= getMinutes(hEnd, mEnd)) {
    if (isIncluding(hStart, n) || isIncluding(mStart, n)) result++;

    mStart++;
    hStart += mStart / 60;
    mStart %= 60;
  }

  cout << result;
}