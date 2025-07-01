// https://www.acmicpc.net/problem/23811 2025-07-01 BOJ 23811 골뱅이 찍기 - ㅌ
#include <iostream>

using namespace std;

void line(int& n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n * 5; j++) {
      cout << '@';
    }
    cout << '\n';
  }
}

void dot(int& n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << '@';
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;

  line(n);
  dot(n);
  line(n);
  dot(n);
  line(n);
}