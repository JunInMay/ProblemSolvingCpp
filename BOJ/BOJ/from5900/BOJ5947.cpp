// https://www.acmicpc.net/problem/5947 2024-10-08 BOJ 5947 Book Club
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int cowCount, questionCount, tqCount;
  cin >> cowCount >> questionCount >> tqCount;

  vector<vector<int>> cows;

  for (int i = 0; i < cowCount; i++) {
    cows.push_back(vector<int>());
    for (int j = 0; j < questionCount; j++) {
      int n;
      cin >> n;
      cows[i].push_back(n);
    }
  }

  vector<pair<int, int>> tabulateQuestions;

  for (int i = 0; i < tqCount; i++) {
    int from, what;
    cin >> from >> what;

    tabulateQuestions.push_back(pair<int, int>(from - 1, what));
  }

  int result = 0;

  for (auto& cow : cows) {
    bool filtered = true;

    for (auto& tq : tabulateQuestions) {
      int from, what;
      from = tq.first;
      what = tq.second;

      if (cow[from] != what) filtered = false;
    }

    if (filtered) result++;
  }

  cout << result;
}