// https://www.acmicpc.net/problem/16786 2024-10-18 BOJ 16786 https://www.acmicpc.net/problem/16786
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int players[200];
bool isExist[3000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int position;
    cin >> position;
    players[i+1] = position;
    isExist[position] = true;
  }

  int a;
  cin >> a;

  for (int i = 0; i < a; i++) {
    int index;
    cin >> index;

    if (!isExist[players[index] + 1]) {
      isExist[players[index]] = false;
      players[index] = min(players[index] + 1, 2019);
      isExist[players[index]] = true;
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << players[i] << '\n';
  }
}