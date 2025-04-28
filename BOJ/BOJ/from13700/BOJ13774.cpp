// https://www.acmicpc.net/problem/13774 2025-04-28 BOJ 13774 Palindromes
#include <iostream>

using namespace std;

int main() {
  while (true) {
    string s;
    cin >> s;

    if (s.compare("#") != 0) break;

    bool isPalindrome = true;
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

        if (front != rear) {
          isPalindrome = false;
          break;
        }
      }

      if (isPalindrome) {
        exceptionIdx = i;
        break;
      }
      isPalindrome = true;
    }

    if (isPalindrome) {
      for (int i = 0; i < s.size(); i++) {
        if (i != exceptionIdx) cout << s[i];
      }
      cout << '\n';
      break;
    } else {
      cout << "No\n";
    }
  }
}