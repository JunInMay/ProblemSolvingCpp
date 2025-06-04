// https://www.acmicpc.net/problem/23803 2025-06-04 BOJ 23803 골뱅이 찍기 - ㄴ
#include <iostream>

using namespace std;

void printNtimes(string& s, int t) {
  for (int i = 0; i < t; i++) {
    cout << s;
  }
  cout << '\n';
}

int main() {
  int n;
  cin >> n;

  string one = "@";
  string five = "@@@@@";

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < n; j++) {
      printNtimes(one, n);
    }
  }
  for (int i = 0; i < n; i++) {
    printNtimes(five, n);
  }
}