// https://www.acmicpc.net/problem/21771 2024-09-14 BOJ 21771 가희야 거기서 자는 거 아니야
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<int, int>> dog;
int minPY = 1000, maxPY = -1, minPX = 1000, maxPX = -1;

int main() {
  int r, c, rd, cd, rp, cp;
  cin >> r >> c >> rd >> cd >> rp >> cp;

  cin.ignore();

  for (int i = 0; i < r; i++) {
    string input;
    getline(cin, input);

    for (int j = 0; j < c; j++) {
      char c = input[j];

      if (c == 'G')
        dog.push_back(pair<int, int>(i, j));
      if (c == 'P') {
        minPY = min(minPY, i);
        minPX = min(minPX, j);
        maxPY = max(maxPY, i);
        maxPX = max(maxPX, j);
      }
    }
  }

  int rMinPY = min(minPY, maxPY - (rp - 1));
  int rMaxPY = max(maxPY, minPY + (rp - 1));
  int rMinPX = min(minPX, maxPX - (cp - 1));
  int rMaxPX = max(maxPX, minPX + (cp - 1));

  int result = 0;
  for (auto& p : dog) {
    int y = p.first;
    int x = p.second;

    if ((rMinPY <= y && y <= rMaxPY) && (rMinPX <= x && x <= rMaxPX)) result = 1;
  }

  cout << result;
}
/*
11 11
5 10 7 10
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.

11 11
5 10 6 10
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
GGGGGGGGGG.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.

11 11
7 7 7 7
...........
...........
..GGGGGGG..
..GGGGGGG..
..GGGGGGGPP
..GGGGGGGPP
..GGGGGGGPP
..GGGGGGGPP
..GGGGGGGPP
....PPPPPPP
....PPPPPPP


11 11
4 5 6 10
.GGGGG.....
.GGGGG.....
.GGGGG.....
.GGGGG.....
...........
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.
PPPPPPPPPP.

*/