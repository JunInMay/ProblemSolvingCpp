// https://www.acmicpc.net/problem/29467 BOJ 29467 Шифровка
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  char maxC = 0;
  for (char c : s) maxC = max(maxC, c);

  string maxString = "";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == maxC) {
      string sub = s.substr(i, s.size() - i);
      if (maxString.compare(sub) < 0) {
        maxString = sub;
      }
    }
  }

  cout << maxString;
}