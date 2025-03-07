// https://www.acmicpc.net/problem/5866 2025-03-07 BOJ 5866 Meet and Greet
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

void getInput(deque<pair<int, char>>& deque, int times) {
  while(times-- > 0) {
    int dis;
    char dir;
    cin >> dis >> dir;

    deque.push_back({dis, dir});
  }
}

int getDirection(pair<int, char>& p) {
  return p.second == 'L' ? -1 : 1;
}

bool getIsDiffer(int a, int b) {
  if (a == 0) return false;
  
  if (a != 0) a /= abs(a);
  if (b != 0) b /= abs(b);

  if (a == b) return false;
  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int x, y;
  cin >> x >> y;

  deque<pair<int, char>> bDeque;
  deque<pair<int, char>> eDeque;

  getInput(bDeque, x);
  getInput(eDeque, y);

  int bPos = 0, ePos = 0;
  pair<int, char> bMove, eMove;
  bMove.first = 0;
  eMove.first = 0;

  int result = 0;
  int idx = 0;
  while(true) {
    idx++;
    // 이전 위치 기록
    int evalBefore = bPos - ePos;

    cout << "---------------idx : " << idx << "----------------------------\n";
    // 다음 움직임
    if (bMove.first == 0 && !bDeque.empty()) {
      bMove = bDeque.front();
      bDeque.pop_front();
      cout << "BESSIE POP : " << bMove.first << " " << bMove.second << '\n';
    }

    if (eMove.first == 0 && !eDeque.empty()) {
      eMove = eDeque.front();
      eDeque.pop_front();
      cout << "ELSIE POP : " << eMove.first << " " << eMove.second << '\n';
    }

    cout << "THIS MOVE - " << " BESSIE : " << bPos << " " << ePos << '\n';
    cout << "THIS MOVE - " << " BESSIE : " << bMove.first << " " << bMove.second << " ELSIE : " << eMove.first << " " << eMove.second << '\n';

    // 움직임 진행
    int bDistance = bMove.first;
    int eDistance = eMove.first;
    int move = min(bDistance, eDistance);
    if (move != 0) {
      bDistance = move;
      eDistance = move;
    }

    bPos += bDistance * getDirection(bMove);
    ePos += eDistance * getDirection(eMove);
    bMove.first -= bDistance;
    eMove.first -= eDistance;

    int eval = bPos - ePos;

    bool isDifferent = getIsDiffer(evalBefore, eval);
    if (isDifferent) {
      result++;
      cout << "GET RESULT\n";
    }

    if (bMove.first == 0 && eMove.first == 0 && bDeque.empty() && eDeque.empty()) break;
  }

  cout << result;
}
/*

4 4
3 L
5 R
1 L
2 R
4 R
4 L
4 R
2 L

1 1
5 R
1 R

*/