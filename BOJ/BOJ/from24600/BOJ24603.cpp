// https://www.acmicpc.net/problem/24603 2025-11-26 BOJ 24603 Scaling Recipe
#include <iostream>

using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  while(n-- > 0) {
    int nn;
    cin >> nn;
    cout << nn * y / x << '\n';
  }
}
/*
2 4 10
8
12

2 10 5
8
12

*/