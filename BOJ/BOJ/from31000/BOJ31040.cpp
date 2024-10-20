// https://www.acmicpc.net/problem/31040 2024-10-20 BOJ 31040 Nine Knights
#include <iostream>
#include <vector>

using namespace std;

int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    vector<string> v;
    vector<pair<int, int>> knights;
    for (int i = 0; i < 5; i++) {
      string s;
      cin >> s;
      
      v.push_back(s);

      for (int j = 0; j < 5; j++) {
        if (s[j] == 'k') knights.push_back(make_pair(i, j));
      }
    }

    string result = "valid";
    for (auto& knight : knights) {
      int y = knight.first;
      int x = knight.second;

      for (int i = 0; i < 8; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny > 4 || nx < 0 || nx > 4) continue;

        if (v[ny][nx] == 'k') result = "invalid";
      }
    }
    
    cout << result << '\n';
  }
}