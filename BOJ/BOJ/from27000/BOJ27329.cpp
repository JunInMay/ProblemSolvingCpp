// https://www.acmicpc.net/problem/27329 BOJ 27329 2024-12-23 繰り返し文字列 (Repeating String)
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  string result = "Yes";
  for (int i = 0; i < n / 2; i++) {

    if (s[i] != s[i + (n / 2)]) result = "No";
  }

  cout << result;
}