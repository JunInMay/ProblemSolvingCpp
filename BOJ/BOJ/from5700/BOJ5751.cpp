// https://www.acmicpc.net/problem/5751 2025-07-22 BOJ 5751 Head or Tail
#include <iostream>

using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;

    if (n == 0) break;

    int zeroes = 0, ones = 0;
    for (int i = 0; i < n; i++) {
      int nn;
      cin >> nn;

      if (nn == 0) zeroes++;
      else ones++;
    }

    cout << "Mary won " << zeroes << " times and John won " << ones << " times\n";
  }
}