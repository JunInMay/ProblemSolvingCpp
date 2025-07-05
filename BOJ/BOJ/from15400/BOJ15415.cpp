// https://www.acmicpc.net/problem/15415 2025-07-05 BOJ 15415 Shattered Cake
#include <iostream>

using namespace std;

int main() {
  int w, n;
  cin >> w >> n;

  long long result = 0;
  while(n-- > 0) {
    int h, l;
    cin >> h >> l;

    result += (h * l);
  }

  cout << result / w;
}