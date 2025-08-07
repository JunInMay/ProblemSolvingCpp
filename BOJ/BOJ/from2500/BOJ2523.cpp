// https://www.acmicpc.net/problem/2523 2025-08-07 BOJ 2523 별 찍기 - 13
#include <iostream>
#include <cmath>

using namespace std;

void printStar(int n) {
  while(n-- > 0) {
    cout << '*';
  }
  cout << '\n';
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n * 2 - 1; i++) {
    printStar(n - abs(i - n + 1));
  }
}