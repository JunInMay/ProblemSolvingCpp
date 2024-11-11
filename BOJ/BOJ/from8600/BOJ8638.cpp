// https://www.acmicpc.net/problem/8638 2024-11-08 BOJ 8638 Zwycięzcy
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  vector<int> v;

  for (int i = 0; i < tc; i++) {
    int n;
    cin >> n;

    v.push_back(n);
  }
  
  int maxNum = -1;
  for (int& n : v) {
    if (n > maxNum) maxNum = n;
  }

  for (int i = 0; i < tc; i++) {
    if (v[i] == maxNum) cout << (char)('A' + i);
  }

}