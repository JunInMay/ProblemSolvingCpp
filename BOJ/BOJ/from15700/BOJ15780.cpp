// https://www.acmicpc.net/problem/15780 2025-09-02 BOJ 15780 멀티탭 충분하니?
#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int available = 0;
  while(k-- > 0) {
    int nn;
    cin >> nn;

    available += nn / 2 + nn % 2;
  }

  string result = "NO";
  if (n <= available) result = "YES";

  cout << result;
}