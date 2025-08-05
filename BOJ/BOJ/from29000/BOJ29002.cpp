// https://www.acmicpc.net/problem/29002 2025-08-05 BOJ 29002 Космический корабль
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long sum = 0;
  vector<long long> v = {};
  for (int i = 0; i < n; i++) {
    long long nn;
    cin >> nn;

    v.push_back(nn);
    sum += nn;
  }

  long long boss = sum / 2;
  for (auto& e : v) {
    if (e == boss) continue;
    cout << e << ' ';
  }
  cout << boss;
}