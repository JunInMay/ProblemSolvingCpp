// https://www.acmicpc.net/problem/21167 2025-05-30 BOJ 21167 Curve Speed
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double r, s;
  while(cin >> r) {
    cin >> s;

    cout << round(sqrt((r * (s + 0.16))/0.067)) << '\n';
  }
}