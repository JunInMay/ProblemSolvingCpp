// https://www.acmicpc.net/problem/26145 2024-11-16 BOJ 26145 출제비 재분배
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n, m;
  cin >> n >> m;

  vector<int> result;

  for (int i = 0; i < n + m; i++) result.push_back(0);

  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;

    result[i] = s;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n + m; j++) {
      int s;
      cin >> s;

      result[i] -= s;
      result[j] += s;
    }
  }

  for (auto& i : result) {
    cout << i << " ";
  }
}