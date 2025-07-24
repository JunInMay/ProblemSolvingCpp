// https://www.acmicpc.net/problem/33213 2025-07-24 BOJ 33213 Fermatovi Fakini 
#include <iostream>
#include <cmath>

using namespace std;

bool used[1000010];

int main() {
  int n;
  cin >> n;

  int odd = 0, even = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (num % 2 == 0) even++;
    else odd++;
    used[num] = true;
  }

  int find = 2;
  if (odd > even) {
    find = 1;
  }

  for (int i = find; i <= 1000000; i += 2) {
    if (!used[i]) {
      cout << i;
      break;
    }
  }
}