// https://www.acmicpc.net/problem/23805 2025-05-31 BOJ 23805 골뱅이 찍기 - 돌아간 ㄹ
#include <iostream>

using namespace std;

void printNtimes(string& s, int& times) {
  for (int i = 0; i < times; i++) {
    cout << s;
  }
}

int main() {
  int n;
  cin >> n;

  string three = "@@@";
  string one = "@";
  string blank = " ";

  for (int j = 0; j < n; j++) {
    printNtimes(three, n);
    printNtimes(blank, n);
    printNtimes(one, n);
    cout << '\n';
  }
  for (int j = 0; j < n * 3; j++) {
    printNtimes(one, n);
    printNtimes(blank, n);
    printNtimes(one, n);
    printNtimes(blank, n);
    printNtimes(one, n);
    cout << '\n';
  }
  for (int j = 0; j < n; j++) {
    printNtimes(one, n);
    printNtimes(blank, n);
    printNtimes(three, n);
    cout << '\n';
  }
}