// https://www.acmicpc.net/problem/26198 2026-01-18 BOJ 26198 Chronogram
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while(n-- > 0) {
    string s;
    getline(cin, s);

    int result = 0;

    for (char& c : s) {
      int add = 0;
      switch(c) {
        case 'I':
          add = 1;
        break;
        case 'V':
          add = 5;
        break;
        case 'X':
          add = 10;
        break;
        case 'L':
          add = 50;
        break;
        case 'C':
          add = 100;
        break;
        case 'D':
          add = 500;
        break;
        case 'M':
          add = 1000;
        break;
      }
      result += add;
    }

    cout << result << '\n';
  }
}