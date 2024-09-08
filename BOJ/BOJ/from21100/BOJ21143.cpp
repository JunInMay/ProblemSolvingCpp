// https://www.acmicpc.net/problem/21143 BOJ 21143 Magic Trick 2024-09-08
#include <iostream>

using namespace std;

bool isAppeared[30];

int main() {
  string s;
  cin >> s;

  int result = 1;
  for (char c : s) {
    int idx = c - 'a';

    if (isAppeared[idx]) result = 0;
    else isAppeared[idx] = true;
  }

  cout << result;
}