// https://www.acmicpc.net/problem/26336 2024-10-30 BOJ 26336 Are We Stopping Again?
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while (tc-- > 0) {
    int m, g, f;
    cin >> m >> g >> f;

    int result = 0;
    for (int i = 1; i < m; i++) {
      if (i % g == 0 || i % f == 0) result++;
    }

    cout << m << " " << g << " " << f << '\n';
    cout << result << '\n';
  }
}