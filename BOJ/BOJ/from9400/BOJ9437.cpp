// https://www.acmicpc.net/problem/9437 2024-10-27 BOJ 9437 사라진 페이지 찾기
#include <iostream>

using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;
    if (n == 0) break;

    int a;
    cin >> a;

    int midIdx = n / 2 / 2;
    int idx = (a - 1) / 2;
    if (a > n / 2) idx = midIdx - (idx - midIdx) - 1;

    int candidates[4] = {
      (idx * 2 + 1),
      (idx * 2 + 2),
      (n - idx * 2 - 1),
      (n - idx * 2),
    };

    for (int& c : candidates) {
      if (c != a) cout << c << " ";
    }
    cout << '\n';
  }
}
/*
8 1
8 2
8 3
8 4
8 5
8 6
8 7
8 8
0

*/