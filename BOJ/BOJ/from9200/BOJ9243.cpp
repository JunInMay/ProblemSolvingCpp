// https://www.acmicpc.net/problem/9243 2025-02-22 BOJ 9243 파일 완전 삭제
#include <iostream>

using namespace std;

int main() {
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;

  string result = "Deletion succeeded";
  for (int i = 0; i < s1.size(); i++) {
    if ((n % 2 && s1[i] == s2[i]) || (!(n % 2) && s1[i] != s2[i])) {
      result = "Deletion failed";
    }
  }

  cout << result;
}