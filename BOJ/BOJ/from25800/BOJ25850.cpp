// https://www.acmicpc.net/problem/25850 2025-06-21 BOJ 25850 A Game Called Mind
#include <iostream>
#include <algorithm>

using namespace std;

char arr[150];

int main() {
  int n;
  cin >> n;

  fill(arr, arr+120, 0);
  char idx = 'A';
  while(n-- > 0) {
    int nn;
    cin >> nn;

    for (int i = 0; i < nn; i++) {
      int now;
      cin >> now;
      arr[now] = idx;
    }
    idx++;
  }

  for (int i = 0; i < 120; i++) {
    if (arr[i]) {
      cout << arr[i];
    }
  }
}