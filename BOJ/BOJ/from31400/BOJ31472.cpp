// https://www.acmicpc.net/problem/31472 2025-05-21 BOJ 31472 갈래의 색종이 자르기
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  cout << (int)sqrt(n * 2) * 4;
}