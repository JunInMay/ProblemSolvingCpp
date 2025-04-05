// https://www.acmicpc.net/problem/14541 2025-04-05 BOJ 14541 Speed Limit
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  while (true){
    int n;
    cin >> n;
    if (n == -1) break;

    int elapsedBefore = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
      int speed, elapsed;
      cin >> speed >> elapsed;

      result += (speed * (elapsed - elapsedBefore));
      elapsedBefore = elapsed;
    }

    cout << result << " miles\n";
  }
}