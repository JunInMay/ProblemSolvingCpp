// https://www.acmicpc.net/problem/10179 BOJ 10179 쿠폰 2024-07-22
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  cout << fixed << setprecision(2);
  while(tc-- > 0) {
    double d;
    cin >> d;

    cout << '$' << d * 0.8 << '\n';
  }
}