// https://www.acmicpc.net/problem/13901 BOJ 13901 로봇 2024-08-16
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

vector<vector<int>> board;
deque<int> directions;

int dy[5] = {-100, -1, 1, 0, 0};
int dx[5] = {-100, 0, 0, -1, 1};
bool visited[1001][1001];

int main() {
  int r, c;
  cin >> r >> c;

  // board 초기화 작업
  board = vector<vector<int>>(r);
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      board[i].push_back(0);
    }
  }

  // 장애물 입력(-1로 처리)
  int k;
  cin >> k;
  for (int i = 0; i < k; i++) {
    int y, x;
    cin >> y >> x;

    board[y][x] = -1;
  }

  // 시작위치
  int sy, sx;
  cin >> sy >> sx;

  // 로봇이 방향을 바꿀 위치 입력 받음
  for (int i = 0; i < 4; i++) {
    int directionIdx;
    cin >> directionIdx;

    directions.push_back(directionIdx);
  }

  // 현재 위치
  int cy = sy, cx = sx;
  visited[cy][cx] = true;

  // 로봇이 움직이지 않는다는 건, 4방향 모두 탐색했는데 움직일 수 없었던 것.
  // breakTimes는 한 방향 탐색하고 움직일 수 없으면 1 증가, 움직일 수 있으면 초기화.
  int breakTimes = 0;

  // 로봇이 움직이지 않을 때까지 방향을 순회하며 그래프 탐색
  while(true) {
    int direction = directions.front();
    directions.push_back(directions.front());
    directions.pop_front();

    while (true) {
      int ny, nx;
      ny = cy + dy[direction];
      nx = cx + dx[direction];

      bool rangeOver = ny < 0 || nx < 0 || ny >= r || nx >= c;
      if (rangeOver) {
        breakTimes++;
        break;
      }

      bool hasObstacle = visited[ny][nx] || board[ny][nx] == -1;
      if (hasObstacle) {
        breakTimes++;
        break;
      }

      visited[ny][nx] = true;

      cy = ny;
      cx = nx;
      breakTimes = 0;
    }

    if (breakTimes == 4) break;
  }

  cout << cy << ' ' << cx;
}