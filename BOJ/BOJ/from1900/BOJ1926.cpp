// https://www.acmicpc.net/problem/1926 BOJ 1926 그림 2024-08-15
#include <iostream>
#include <deque>
#include <cmath>

using namespace std;

bool visited[1000][1000];
int board[1000][1000];
int y, x;

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int bfs(int h, int c) {
  deque<pair<int, int>> dq = {{h, c}};
  visited[h][c] = true;
  int size = 1;

  while (!dq.empty()) {
    auto node = dq.front();
    dq.pop_front();
    int y = node.first;
    int x = node.second;
    
    for (int i = 0; i < 4; i++) {
      int ny = y + dy[i];
      int nx = x + dx[i];

      if (nx < 0 || ny < 0 || nx >= x || ny >= y) continue;

      if (board[ny][nx] != 1 || visited[ny][nx]) continue;

      visited[ny][nx] = true;
      dq.push_back({ny, nx});
      size++;
    }
  }

  return size;
}

int main() {
  cin >> y >> x;

  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      visited[i][j] = false;
      cin >> board[i][j];
    }
  }

  int count = 0;
  int size = 0;
  for (int i = 0; i < y; i++) {
    for (int j = 0; j < x; j++) {
      if (board[i][j] == 1 && !visited[i][j]) {
        count++;
        size = max(size, bfs(i, j));
      }
    }
  }

  cout << count << '\n' << size;
}