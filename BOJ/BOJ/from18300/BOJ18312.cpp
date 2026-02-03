// https://www.acmicpc.net/problem/18312 2026-02-03 BOJ 18312 시각
#include <iostream>

using namespace std;

bool isInclude(int n, int k) {
  if (k == 0 && n < 10) return true;
  
  while(n > 0) {
    if (n % 10 == k) return true;
    n /= 10;
  }

  return false;
}

int s, m, h;

int main() {
  int n, k;
  cin >> n >> k;
  
  for (int i = 0; i < 60; i++) {
    if (isInclude(i, k)) {
      s++;
      m++;
    }
  }

  for (int i = 0; i <= n; i++) {
    if (isInclude(i, k)) h++;
  }

  int hCom = n - h + 1;
  int mCom = 60 - m;
  int sCom = 60 - s;

  cout << hCom * mCom * s + hCom * m * 60 + h * 60 * 60;
}