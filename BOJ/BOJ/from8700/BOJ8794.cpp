// https://www.acmicpc.net/problem/8794 2025-07-02 BOJ 8794 월요일
#include <iostream>

using namespace std;

int main() {
  int z, n, m, l;
  cin >> z;

  while(z-- > 0) {
    cin >> n >> m >> l;

    n = n - (m - l + 1);
    int result = n / m;
    if (n % m != 0) result++;
    if (l == 1) result++;

    cout << result << '\n';
  }
}
/*
1
2 1 1

*/