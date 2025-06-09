// https://www.acmicpc.net/problem/31712 2025-06-09 BOJ 31712 핑크빈 레이드
#include <iostream>

using namespace std;

int getDealt(int& tick, int& damage, int& per, int& hp) {
  if (tick % per == 0) {
    return hp - damage;
  }
  return hp;
}

int main() {
  int c1, d1, c2, d2, c3, d3;
  cin >> c1 >> d1 >> c2 >> d2 >> c3 >> d3;
  int hp;
  cin >> hp;

  int tick = 0;
  while (hp > 0) {
    hp = getDealt(tick, d1, c1, hp);
    hp = getDealt(tick, d2, c2, hp);
    hp = getDealt(tick, d3, c3, hp);

    tick = tick + 1;
  }

  cout << tick - 1;
}