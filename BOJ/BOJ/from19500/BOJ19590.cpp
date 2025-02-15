// https://www.acmicpc.net/problem/19590 2025-02-12 BOJ 19590 비드맨
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n;
  cin >> n;

  vector<long long> beads;

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    long long bead;
    cin >> bead;
    sum += bead;

    beads.push_back(bead);
  }

  sort(beads.begin(), beads.end(), [](auto& left, auto& right) {
    return right < left;
  });

  long long max = beads[0];
  sum -= max;
  
  long long result = (sum + max) % 2;
  if (max > sum) result = max - sum;
  
  cout << result;
}