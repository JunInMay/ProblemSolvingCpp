// https://www.acmicpc.net/problem/32800 2025-01-27 BOJ 32800 Bus Assignment
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = -1;
  int current = 0;
  while(n-- > 0) {
    int a, b;
    cin >> a >> b;

    current -= a;
    current += b;

    result = max(result, current);
  }

  cout << result;
}