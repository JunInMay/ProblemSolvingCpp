// https://www.acmicpc.net/problem/14124 2026-01-25 BOJ 14124 Telefon
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> transform(long long num, int to) {
  vector<int> v;

  while (num > 0) {
    v.push_back(num % to);
    num /= to;
  }

  reverse(v.begin(), v.end());
  return v;
}

int getComplexity(vector<int> v) {
  int result = 0;

  for (int i = 0; i < v.size() - 1; i++) {
    if (v[i] != v[i + 1]) result += 1;
  }

  return result;
}

int main() {
  long long n;
  cin >> n;

  int minComp = 1000;
  int minBase = -1;
  for (int i = 2; i <= 10; i++) {
    vector<int> result = transform(n, i);
    int comp = getComplexity(result);

    if (comp <= minComp) {
      minComp = comp;
      minBase = i;
    }
  }

  cout << minBase;
}
