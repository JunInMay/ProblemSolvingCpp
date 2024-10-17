// https://www.acmicpc.net/problem/26594 2024-10-16 BOJ 26594 ZOAC 5
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int result = 0;
  char before = ' ';
  for (char& c : s) {
    if (result == 0) {
      before = c;
      result = 1;
    }
    else {
      if (c != before) break;
      result++;
    }
  }

  cout << result;
}