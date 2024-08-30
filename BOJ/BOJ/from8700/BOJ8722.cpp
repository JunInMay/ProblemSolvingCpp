// https://www.acmicpc.net/status?user_id=shuangjutou&problem_id=8722&from_mine=1 BOJ 8722 Kratki 2024-08-30
/*
실패했음.

번역기라 그런지 무슨 소린지 이해하기 힘들다. 그리고 왜 틀린건지 알 수가 없네. 아주 생소한 폴란드 대회 문제라 레퍼런스 찾기도 힘들다.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, d;
  cin >> n >> d;

  int maxArea = -1;
  int maxRectangles = 0;

  while (n-- > 0) {
    double w, h;
    cin >> w >> h;

    int col = ceil(w / d);
    int row = ceil(h / d);

    if (maxRectangles <= col * row) {
      maxArea = max(maxArea, (int)(w * h));
      maxRectangles = col * row;
    }
  }

  cout << maxArea;
}