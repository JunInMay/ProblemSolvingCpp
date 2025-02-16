// https://www.acmicpc.net/problem/4655 2025-02-16 BOJ 4655 Hangover
#include <iostream>

using namespace std;

int main() {
  while (true) {
    double d;
    cin >> d;
    if (d == 0) break;

    int cards = 0;
    double length = 0;
    for (int i = 2; length < d; i++) {
      length += (double) 1 / i;
      cards++;
    }

    cout << cards << " card(s)\n";
  }
}