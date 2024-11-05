// https://www.acmicpc.net/problem/30792 2024-11-05 BOJ 30792 gahui and sousenkyo 2
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, t;
  cin >> n >> t;

  int result = 1;
  for (int i = 0; i < n - 1; i++) {
    int vote;
    cin >> vote;

    if (vote > t) result++;
  }

  cout << result;
}