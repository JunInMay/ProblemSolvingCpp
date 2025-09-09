// https://www.acmicpc.net/problem/18406 2025-09-09 BOJ 18406 럭키 스트레이트
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int l = s.length();

  int lSum = 0;
  int rSum = 0;
  for (int i = 0; i < l; i++) {
    if (i < l / 2) {
      lSum += s[i] - '0';
    } else {
      rSum += s[i] - '0';
    }
  }

  string result = "READY";
  if (lSum == rSum) result = "LUCKY";

  cout << result;
}