// https://www.acmicpc.net/problem/23627 2025-01-10 BOJ 23627 driip
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int size = s.size();

  string result = "not cute";
  char answer[5] = {'d', 'r', 'i', 'i', 'p'};
  if (size >= 5) {
    bool isSame = true;
    for (int i = 0; i < 5; i++) {
      char verifying = answer[i];
      if (s[size - 5 + i] != verifying) isSame = false;
    }

    if (isSame) result = "cute";
  }

  cout << result;
}