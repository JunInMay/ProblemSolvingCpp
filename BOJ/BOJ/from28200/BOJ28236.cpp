// https://www.acmicpc.net/problem/28236 2025-06-05 BOJ 28236 점심시간 레이스
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int h, w, n;
  cin >> h >> w >> n;
  
  int result = -1;
  int shortest = -1;
  for (int i = 0; i < n; i++) {
    int y, x;
    cin >> y >> x;

    int distance = w - x + y;
    if (shortest == -1 || distance < shortest) {
      shortest = distance;
      result = i + 1;
    }
  }

  cout << result;
}