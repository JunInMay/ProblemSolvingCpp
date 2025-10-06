// https://www.acmicpc.net/problem/33652 2025-10-06 BOJ 33652 Testing LEDs
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = -1;
  while(n-- > 0) {
    int m, o;
    cin >> m >> o;

    if (o == 0) {
      if (result == -1) {
        result = m;
      } else result = min(result, m);
    }
  }

  cout << result;
}