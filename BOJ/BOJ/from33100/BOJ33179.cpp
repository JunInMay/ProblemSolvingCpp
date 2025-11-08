// https://www.acmicpc.net/problem/33179 2025-11-08 BOJ 33179 Hezardastan’s Annual Report
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;
  while(n-- > 0) {
    int nn;
    cin >> nn;

    result += nn / 2 + nn % 2;
  }
  cout << result;
}