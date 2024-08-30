// https://www.acmicpc.net/problem/6212 BOJ 6212 Dream Counting 2024-08-30
#include <iostream>

using namespace std;

int count[10];

int main() {
  int l, r;
  cin >> l >> r;

  for (int i = l; i <= r; i++) {
    int n = i;

    while (n > 0) {
      count[n % 10]++;
      n /= 10;
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << count[i] << ' ';
  }
}