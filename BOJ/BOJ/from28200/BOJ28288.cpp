// https://www.acmicpc.net/problem/28288 2025-12-25 BOJ 28288 Special Event
#include <iostream>
#include <cmath>

using namespace std;

int days[10];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  
  while(n -- > 0) {
    string s;
    cin >> s;

    int cnt = 0;
    int idx = 0;

    for (char& c : s) {
      if (c == 'Y') days[idx]++;
      idx++;
    }
  }

  int maxPeople = -1;
  for (int i = 0; i < 5; i++) {
    maxPeople = max(maxPeople, days[i]);
  }
  
  bool duplicated = false;
  for (int i = 0; i < 5; i++) {
    if (days[i] == maxPeople) {
      if (duplicated) cout << ',';
      cout << i + 1;
      duplicated = true;
    }
  }
}