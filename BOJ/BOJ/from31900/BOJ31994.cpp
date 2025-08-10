// https://www.acmicpc.net/problem/31994 2025-08-10 BOJ 31994 강당 대관
#include <iostream>

using namespace std;

int main() {
  int nnn = 7;

  int maxNum = -1;
  string maxString = "";
  
  while(nnn-- > 0) {
    int n;
    string s;
    cin >> s >> n;

    if (maxNum < n) {
      maxNum = n;
      maxString = s;
    }
  }

  cout << maxString;
}