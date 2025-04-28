// https://www.acmicpc.net/problem/13774 2025-04-28 BOJ 13774 Palindromes
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  while (true) {
    string s;
    cin >> s;

    if (s.compare("#") == 0) break;

    bool isPalindrome = true;
    bool hasPalindrome = false;
    int exceptionIdx = -1;
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < s.size()/2; j++) {
        int front = j;
        int rear = s.size() - 1 - j;

        int fBuffer = 0;
        int rBuffer = 0;

        if (i <= front) fBuffer = 1;
        if (rear <= i) rBuffer = 1;

        front += fBuffer;
        rear -= rBuffer;

        if (s[front] != s[rear]) {
          isPalindrome = false;
          break;
        }
      }

      if (isPalindrome) {
        if (s.size() != 1)
          exceptionIdx = i;
        hasPalindrome = true;
        break;
      }
      isPalindrome = true;
    }

    if (hasPalindrome) {
      for (int i = 0; i < s.size(); i++) {
        if (i != exceptionIdx) cout << s[i];
      }
      cout << '\n';
    } else {
      cout << "not possible\n";
    }
  }
}