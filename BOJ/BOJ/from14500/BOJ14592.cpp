// https://www.acmicpc.net/problem/14592 BOJ 14592 2017 아주대학교 프로그래밍 경시대회 (Small) 2024-07-28
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Result {
  int idx, s, c, l;
};

bool compare(Result& left, Result& right) {
  if (left.s > right.s) return 1;
  else if (left.s < right.s) return 0;

  if (left.c < right.c) return 1;
  else if (left.s > right.s) return 0;

  return left.l < right.l;
}

int main() {
  int n;
  cin >> n;

  vector<Result> v;
  for (int i = 1; i <= n; i++) {
    int s, c, l;
    cin >> s >> c >> l;

    v.push_back({i, s, c, l});
  }

  sort(v.begin(), v.end(), compare);

  cout << v[0].idx;
}

/*
3
200 1 30
500 2 40
400 3 50

3
100 2 30
100 1 40
100 3 50

3
100 2 40
100 2 20
100 3 50

*/