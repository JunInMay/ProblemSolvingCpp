// https://www.acmicpc.net/problem/15036 72025-12-13 BOJ 15036 Just A Minim
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  double result = 0;
  while(n-- > 0) {
    int d;
    cin >> d;
    double s = 0;

    if (d == 0) {
      s = 2;
    } else {
      s = (double)1 / d;
    }
    result += s;
  }

  cout << fixed << setprecision(6) << result;
}