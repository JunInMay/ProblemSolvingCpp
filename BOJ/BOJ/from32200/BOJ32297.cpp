// https://www.acmicpc.net/problem/32297 2024-12-27 BOJ 32297 문자열을 만들어요
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;

  string result = "NO";
  for (int i = 0; i < n - 3; i++) {
    if (s[i] == 'g' && s[i + 1] == 'o' && s[i + 2] == 'r' && s[i + 3] == 'i') {
      result = "YES";
    }
  }

  cout << result;
}