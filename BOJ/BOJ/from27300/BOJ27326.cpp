// https://www.acmicpc.net/problem/27326 2024-10-10 BOJ 27326 二人三脚 (Three-Legged Race)
#include <iostream>

using namespace std;

int pairs[101];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < 2 * n - 1; i++) {
    int number;
    cin >> number;

    pairs[number]++;
  }

  for (int i = 1; i <= n; i++) {
    if (pairs[i] == 1) {
      cout << i;
      break;
    }
  }
}