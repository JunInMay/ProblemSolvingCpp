// https://www.acmicpc.net/problem/25756 2025-04-25 BOJ 25756 방어율 무시 계산하기
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n;
  cout << fixed << setprecision(6);
  cin >> n;

  double pierce = 0;
  while (n-- > 0) {
    double a;
    cin >> a;

    pierce = (10000 - (100 - pierce) * (100 - a)) / 100;
    cout << pierce << '\n';
  }
}