// https://www.acmicpc.net/problem/21645 2025-11-03 BOJ 21645 Ролевая игра
#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  if (m > k) {
    cout << n * (m / k + k - 1);
  } else {
    cout << n * m;
  }
}
/*
1 10 2
1 10 3
1 1 1
1 5 10

*/