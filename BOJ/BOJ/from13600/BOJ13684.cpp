// https://www.acmicpc.net/problem/13684 2025-03-02 BOJ 13684 Divisão da Nlogõnia
#include <iostream>

using namespace std;

int main() {
  while(true) {
    int tc;
    cin >> tc;

    if (tc == 0) break;

    int sx, sy;
    cin >> sx >> sy;

    for (int i = 0; i < tc; i++) {
      int x, y;
      cin >> x >> y;
      
      string result = "divisa";
      if (x < sx && y < sy) {
        result = "SO";
      } else if (x > sx && y < sy) {
        result = "SE";
      } else if (x < sx && y > sy) {
        result = "NO";
      } else if (x > sx && y > sy) {
        result = "NE";
      }

      cout << result << '\n';
    }
  }
}