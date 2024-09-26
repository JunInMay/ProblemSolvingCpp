// https://www.acmicpc.net/problem/15096 2024-09-26, BOJ 15096
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int batCount = 0;
  double sum = 0;
  for (int i = 0; i < n; i++) {
    double d;
    cin >> d;

    if (d != -1) {
      batCount++;
      sum += d;
    }
  }

  cout << fixed << setprecision(9) << sum / batCount;
}