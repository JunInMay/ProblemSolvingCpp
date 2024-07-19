// https://www.acmicpc.net/problem/2897 BOJ 2897 몬스터 트럭 2024-07-20
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dy[] = { 0, 0, 1, 1 };
int dx[] = { 0, 1, 0, 1 };

int parkable(int y, int x, vector<vector<char>> v) {
  int result = 0;

  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i], nx = x + dx[i];
    if (ny >= v.size() || nx >= v[0].size()) {
      return -1;
    }

    switch (v[ny][nx]) {
      case '#':
        return -1;
      case 'X':
        result++;
        break;
      default:
        break;
    }
  }

  return result;
}

int main() {
  int r, c;
  cin >> r >> c;

  vector<vector<char>> v;

  for (int i = 0; i < r; i++) {
    v.push_back(vector<char>());
    for (int j = 0; j < c; j++) {
      char n;
      cin >> n;
      v[i].push_back(n);
    }
  }

  int results[5];
  fill(results, results+5, 0);

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int idx = parkable(i, j, v);
      if (idx != -1) results[idx]++;
    }
  }

  for (int i = 0; i < 5; i++) {
    cout << results[i] << '\n';
  }
}