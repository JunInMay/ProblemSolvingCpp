// https://www.acmicpc.net/problem/11659 2024-12-09 BOJ 11659 구간 합 구하기 4
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  vector<int> sums{0};
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    sums.push_back(sums[i] + num);
  }

  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;

    cout << sums[to] - sums[from-1] << '\n';
  }
}