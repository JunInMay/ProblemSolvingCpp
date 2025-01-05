// https://www.acmicpc.net/problem/9896 2025-01-05 BOJ 9896 Gray
#include <iostream>

using namespace std;

int add(char a, char b) {
  return a - '0' ^ b - '0';
}

int main() {
  int n;
  string s;
  cin >> n >> s;

  char before = s[0];
  cout << s[0];

  for (int i = 1; i < s.size(); i++) {
    char current = s[i];

    cout << add(before, current);
    before = current;
  }
}