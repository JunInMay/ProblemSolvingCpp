// https://www.acmicpc.net/problem/25915 2025-05-28 BOJ 25915 연세여 사랑한다
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  char now;
  cin >> now;

  string answer = "ILOVEYONSEI";
  int result = 0;
  for (char& c : answer) {
    result += abs(now - c);
    now = c;
  }

  cout << result;
}