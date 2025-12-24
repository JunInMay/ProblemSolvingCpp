// https://www.acmicpc.net/problem/20571 2025-12-24 BOJ 20571 Elevators
#include <iostream>

using namespace std;

int main() {
  string s;
  int n;
  cin >> s >> n;

  int result = 0;
  if (s.compare("residential") == 0) {
    if (n >= 16) {
      result = 4;
    } else if (n >= 11) {
      result = 3;
    } else if (n >= 6) {
      result = 2;
    } else if (n >= 2) {
      result = 1;
    }
  } else if (s.compare("industrial") == 0) {
    if (n >= 17) {
      result = 5;
    } else if (n >= 13) {
      result = 4;
    } else if (n >= 9) {
      result = 3;
    } else if (n >= 5) {
      result = 2;
    } else if (n >= 2) {
      result = 1;
    }
  } else {
    if (n >= 15) {
      result = 3;
    } else if (n >= 8) {
      result = 2;
    } else if (n >= 2) {
      result = 1;
    }
  }

  cout << result;
}