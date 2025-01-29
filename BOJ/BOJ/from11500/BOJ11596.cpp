// https://www.acmicpc.net/problem/11596 2025-01-29 BOJ 11596 Triangle
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void input(vector<int>& v) {
  for (int i = 0; i < 3; i++) {
    int n;
    cin >> n;

    v.push_back(n);
  }
}

bool isSame(vector<int>& v1, vector<int>& v2) {
  for (int i = 0; i < 3; i++) {
    int l, r;
    l = v1[i];
    r = v2[i];

    if (l != r) return false;
  }

  return true;
}

bool isRight(vector<int>& v) {
  sort(v.begin(), v.end());
  int a, b, c;
  a = v[0];
  b = v[1];
  c = v[2];

  if (a * a + b * b == c * c) return true;
  return false;
}

int main() {
  vector<int> v1, v2;
  input(v1);
  input(v2);

  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  string result = "NO";
  if (isSame(v1, v2) && isRight(v1)) result = "YES";

  cout << result;
}