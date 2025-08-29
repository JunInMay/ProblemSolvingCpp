// https://www.acmicpc.net/problem/31616 2025-08-29 BOJ 31616 揃った文字 (Matched Letters)
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;

  char before = ' ';
  string result = "Yes";
  for (char& c : s) {
    if (before == ' ') {
      before = c;
      continue;
    }

    if (before != c) result = "No";
  }

  cout << result;
}