// https://www.acmicpc.net/problem/25813 2025-04-10 BOJ 25813 Changing Strings
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int uIdx = -1, fIdx = -1;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'U' && uIdx == -1) uIdx = i;
    if (s[i] == 'F') fIdx = i;
  }

  for (int i = 0; i < uIdx; i++) {
    cout << '-';
  }
  cout << 'U';
  for (int i = uIdx + 1; i < fIdx; i++) {
    cout << 'C';
  }
  cout << 'F';
  for (int i = fIdx + 1; i < s.size(); i++) {
    cout << '-';
  }

}