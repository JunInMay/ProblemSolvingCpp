// https://www.acmicpc.net/problem/26933 2025-03-01 BOJ 26933 Receptet
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  int result = 0;
  while(n-- > 0) {
    int h, b, k;
    cin >> h >> b >> k;

    result += (max(0, b-h) * k);
  }

  cout << result;
}