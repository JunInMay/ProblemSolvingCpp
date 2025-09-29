// https://www.acmicpc.net/problem/30490 2025-09-029 BOJ 30490 Battle Bots
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long n;
  cin >> n;

  int result = 1;
  long long standard = 1;
  while (n > standard) {
    standard *= 2;
    result++;
  }

  cout << result;
}