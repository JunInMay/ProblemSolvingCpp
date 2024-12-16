// https://www.acmicpc.net/problem/26943 BOJ 26943 2024-12-16 Turnering
#include <iostream>

using namespace std;

int main() {
  int n, c;
  cin >> n >> c;

  int* arr = new int[n];

  for (int i = 1; i <= n; i++) arr[i - 1] = i;

  for (int i = 0; i < c - 1; i++) {
    int now = arr[n-2];
    for (int j = 0; j < n - 1; j ++) {
      int tmp = arr[j];
      arr[j] = now;
      now = tmp;
    }
  }

  for (int i = 0; i < n / 2; i++) {
    cout << arr[i] << "-" << arr[n-1-i] << '\n';
  }

  delete arr;
}