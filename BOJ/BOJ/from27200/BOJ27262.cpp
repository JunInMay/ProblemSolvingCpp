// https://www.acmicpc.net/problem/27262 BOJ 27262 Лифт 2024-07-18
#include <iostream>

using namespace std;

int main() {
  int n, k, a, b;
  cin >> n >> k >> a >> b;

  int stair = a * (n - 1);
  int elevator = (k - 1) * b + (n - 1) * b;

  cout << elevator << ' ' << stair;
}