// https://www.acmicpc.net/problem/30314 2025-04-01 BOJ 30314 Just a Joystick
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;

  int result = 0;
  for (int i = 0; i < n; i++) {
    int c1 = s1[i] - 'A';
    int c2 = s2[i] - 'A';

    result += min(min(abs(c1 - c2), abs(c1+26 - c2)), abs(c2+26 - c1));
  }

  cout << result;
}