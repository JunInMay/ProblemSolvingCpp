// https://www.acmicpc.net/problem/17945 2025-02-09 BOJ 17945 통학의 신
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int b, c;
  cin >> b >> c;
  int a = 1;
  b *= 2;

  int res1 = (-b + (int)sqrt(b * b - (4 * a * c))) / 2 * a;
  int res2 = (-b - (int)sqrt(b * b - (4 * a * c))) / 2 * a;

  if (res1 > res2) {
    int tmp = res1;
    res1 = res2;
    res2 = tmp;
  }

  cout << res1 << ' ';
  if (res1 != res2) cout << res2;
}