// https://www.acmicpc.net/problem/10812 2024-10-26 BOJ 10812 바구니 순서 바꾸기
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, spinCase;
  cin >> n >> spinCase;

  vector<int> v;

  for (int i = 1; i <= n; i++) v.push_back(i);

  while (spinCase-- > 0) {
    int from, to, mid;
    cin >> from >> to >> mid;

    vector<int> l, r;
    for (int i = mid - 1; i <= to - 1; i++) {
      l.push_back(v[i]);
    }
    for (int i = from - 1; i < mid - 1; i++) {
      r.push_back(v[i]);
    }

    for (int i = 0; i < to - mid + 1; i++) {
      v[from - 1 + i] = l[i];
    }
    for (int i = 0; i < mid - from; i++) {
      v[from + to - mid + i] = r[i];
    }
  }

  for (int& n : v) cout << n << " ";
}

/*
10 1
1 6 4

10 1
3 9 8

10 1
2 10 5

10 1
1 3 3

10 1
2 6 2

*/