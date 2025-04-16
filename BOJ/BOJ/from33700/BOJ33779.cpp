// https://www.acmicpc.net/problem/33779 2025-04-16 BOJ 33779 Back and Forth
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int length = s.size();

  string result = "beep";

  for (int i = 0; i < length; i++) {
    if (s[i] != s[length - 1 - i]) result = "boop";
  }

  cout << result;
}