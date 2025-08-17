// https://www.acmicpc.net/problem/27194 2025-08-17 BOJ 27194 Meeting Near the Fountain
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double n, t, m, x, y;
  cin >> n >> t >> m >> x >> y;

  double timesBeforeEntrance = m / x;
  double timesAfterEntrance = (n - m) / y;
  int result = max((int) (ceil((timesBeforeEntrance + timesAfterEntrance) / 60) - t), 0);

  cout << result;
}
/*
6000 10
6000
9 10

*/