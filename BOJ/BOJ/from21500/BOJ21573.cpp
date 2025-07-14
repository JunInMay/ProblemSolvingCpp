// https://www.acmicpc.net/problem/21573 2025-07-14 BOJ 21573 Кондиционер
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int from, to;
  string inst;

  cin >> from >> to >> inst;

  int result = -11111;
  if (inst.compare("heat") == 0) {
    result = max(from, to);
  } else if (inst.compare("freeze") == 0) {
    result = min(from, to);
  } else if (inst.compare("auto") == 0) {
    result = to;
  } else if (inst.compare("fan") == 0) {
    result = from;
  }

  cout << result;
}