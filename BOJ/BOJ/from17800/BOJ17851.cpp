// https://www.acmicpc.net/problem/17851 2025-12-29 BOJ 17851 This Problem’s a Slam Dunk
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a[5], b[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < 5; i++) {
    cin >> b[i];
  }

  sort(a, a+5);
  sort(b, b+5);

  int result = 0;
  for (int i = 0; i < 5; i++) {
    if (a[i] > b[i]) result++;
  }

  cout << result;
}