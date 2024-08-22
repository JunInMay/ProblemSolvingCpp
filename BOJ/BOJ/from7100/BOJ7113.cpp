// https://www.acmicpc.net/problem/7113 BOJ 7113 Rectangle 2024-08-22
#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int result = 1;
  while (a != b) {
    if (a < b) {
      int t = b;
      b = a;
      a = t;
    }

    a -= b;
    result++;
  }

  cout << result;
}