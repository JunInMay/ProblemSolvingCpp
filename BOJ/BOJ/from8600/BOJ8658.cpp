// https://www.acmicpc.net/problem/8658 2025-04-21 BOJ 8658 Liczba
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int minNum = -1, maxNum = -1;
  for (int i = 2; i <= n; i++) {
    if (minNum == -1 && n % i != 0) minNum = i;
    if (maxNum == -1 && n % (n - i + 1) != 0) maxNum = n - i + 1;

    if (minNum != -1 && maxNum != -1) break;
  }

  cout << minNum << ' ' << maxNum;
}