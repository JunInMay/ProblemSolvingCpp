// https://www.acmicpc.net/problem/32762 2024-12-22 BOJ 32762 더치 페이
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
  }

  long long sum = 0;
  for (int i = 0; i < m; i++) {
    long long t, p;
    cin >> t >> p;

    sum += p;
  }

  cout << fixed << setprecision(5);
  cout <<(double)sum / n;
}