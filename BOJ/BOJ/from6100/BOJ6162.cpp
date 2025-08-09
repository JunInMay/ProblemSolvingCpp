// https://www.acmicpc.net/problem/6162 2025-08-09 BOJ 6162 Superlatives
#include <iostream>

using namespace std;

void printMega(int n) {
  while(n-- > 0) {
    cout << "mega ";
  }
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    double e, a;
    cin >> e >> a;

    cout << "Data Set " << i + 1 << ":\n";
    if (e <= a) {
      cout << "no drought\n\n";
    } else {
      int cnt = 0;
      while(e > a * 5) {
        e /= 5;
        cnt++;
      }
      printMega(cnt);
      cout << "drought\n\n";
    }
  }
}
/*
3
6 1
25 1
26 1

*/