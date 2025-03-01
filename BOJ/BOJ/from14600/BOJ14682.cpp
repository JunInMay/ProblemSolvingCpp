// https://www.acmicpc.net/problem/14682 2025-02-28 BOJ 14682 Shifty Sum
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int num, l;
  cin >> num >> l;

  int result = num;
  for (int i = 0; i < l; i++) {
    result += num * pow(10, i + 1);
  }

  cout << result;
}