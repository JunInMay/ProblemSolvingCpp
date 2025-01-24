// https://www.acmicpc.net/problem/4757 2025-01-24 BOJ 4757 A Contesting Decision
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int teams;
  cin >> teams;

  vector<pair<string, pair<int, int>>> v;

  for (int i = 0; i < teams; i++) {
    string teamName;
    cin >> teamName;

    int solved = 0, penalty = 0;
    for (int j = 0; j < 4; j++) {
      int sub, time;
      cin >> sub >> time;

      if (time > 0) {
        penalty += sub * 20 - 20 + time;
        solved++;
      }
    }

    v.push_back({teamName, {solved, penalty}});
  }

  sort(v.begin(), v.end(), [](auto& left, auto& right){
    auto& l = left.second;
    auto& r = right.second;

    if (l.first == r.first) {
      return l.second < r.second;
    }
    return l.first > r.first;
  });

  auto& winner = v[0];
  auto& point = winner.second;
  cout << winner.first << " " << point.first << " " << point.second;
}