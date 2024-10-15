// https://www.acmicpc.net/problem/26026 2024-10-15 BOJ 26026 Coffee Cup Combo
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  int coffee = 0;
  int result = 0;
  for (char& c : s) {
    if (c == '1') {
      result++;
      coffee = 2;
    } else {
      if (coffee > 0) result++;

      coffee--;
    }
  }

  cout << result;
}