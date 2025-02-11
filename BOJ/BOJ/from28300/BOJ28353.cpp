// https://www.acmicpc.net/problem/28353 2025-02-11 BOJ 28353 고양이 카페
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool selected[10000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, capacity;
  cin >> n >> capacity;

  vector<int> cats;

  for (int i = 0; i < n; i++) {
    int cat;
    cin >> cat;

    cats.push_back(cat);
  }

  sort(cats.begin(), cats.end(), [](int l, int r) {
    return r < l;
  });

  int result = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (!selected[i] && !selected[j] && cats[i] + cats[j] <= capacity) {
        selected[i] = true;
        selected[j] = true;
        result++;
        break;
      }
    }
  }

  cout << result;
}