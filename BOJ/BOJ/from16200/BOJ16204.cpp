// https://www.acmicpc.net/problem/16204 BOJ 16204 카드 뽑기
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  cout << min(m, k) + min(n-m, n-k);
}