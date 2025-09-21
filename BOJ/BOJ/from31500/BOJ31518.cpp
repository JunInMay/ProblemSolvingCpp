// https://www.acmicpc.net/problem/31518 2025-09-21 BOJ 31518 Triple Sevens
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n ;

  int result = 777;
  for (int i = 0; i < 3; i++) {
    bool able = false;
    for (int j = 0; j < n; j++) {
      int nn;
      cin >> nn;

      if (nn == 7) able = true;
    }

    if (!able) result = 0;
  }

  cout << result;
}