// https://www.acmicpc.net/problem/16479 2025-04-09 BOJ 16479 컵라면 측정하기
#include <iostream>

using namespace std;

int main() {
  double k, d1, d2;
  cin >> k >> d1 >> d2;

  double a = (d1 - d2) / 2;
  double result = k * k - a * a;

  cout << result;
}