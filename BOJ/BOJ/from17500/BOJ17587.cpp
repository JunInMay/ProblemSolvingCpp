// https://www.acmicpc.net/problem/17578 BOJ 17578 On-Screen Keyboard 2024-09-06
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  map<char, pair<int, int>> m;

  while(true) {
    int h, w;
    cin >> h >> w;
    if (h == 0 && w == 0) break;

    // constructing OSK
    m.clear();
    for (int i = 0; i < h; i++) {
      string buttons;
      cin >> buttons;

      for (int j = 0; j < w; j++) {
        m[buttons[j]] = pair<int, int>(i, j);
      }
    }

    string input;
    cin >> input;
    int curY = 0, curX = 0;
    int result = 0;
    for (auto c : input) {
      pair<int, int> pos = m[c];
      result += abs(curY - pos.first) + abs(curX - pos.second) + 1;
      curY = pos.first;
      curX = pos.second;
    }
    
    cout << result << '\n';
  }
}