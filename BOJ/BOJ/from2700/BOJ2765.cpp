// https://www.acmicpc.net/problem/2765 2024-11-06 BOJ 2765 자전거 속도
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  double pi = 3.1415927;

  int idx = 1;
  while(true){
    double a, b, c;
    cin >> a >> b >> c;
    if (b == 0) break;

    double d = (pi * a * b) / (12 * 5280);

    cout << setprecision(2) << fixed;
    cout << "Trip #" << idx << ": " << d << " " << d / (c / 3600) << '\n';

    idx++;
  }
}