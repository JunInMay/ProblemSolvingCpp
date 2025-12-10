// https://www.acmicpc.net/problem/24927 2025-12-10 BOJ 24927 Is It Even?
#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int tc = 0;
  while(n-- > 0) {
    int nn;
    cin >> nn;

    while (nn % 2 == 0) {
      tc++;
      nn /= 2;
    }
  }

  int result = 0;
  if (tc >= k) result = 1;
  cout << result;
}