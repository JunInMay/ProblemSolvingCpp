// https://www.acmicpc.net/problem/32449 2025-09-07 BOJ 32449 Animal Farm
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<string, int>> v;

  int maxPig = -1;

  while(n-- > 0) {
    string s;
    int i;
    cin >> s >> i;

    v.push_back({s, i});
    if (s.compare("pig") == 0) {
      maxPig = max(maxPig, i);
    }
  }

  long long sum = maxPig;

  for (auto& e : v) {
    if (e.first.compare("pig") == 0) continue;

    if (e.second < maxPig) sum += e.second;
  }

  cout << sum;
}