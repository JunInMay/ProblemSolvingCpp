// https://www.acmicpc.net/problem/34115 2026-02-02 BOJ 34115 먼 카드
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n ;

  vector<int> v(2 * n);
  vector<int> starts(n + 1);
  fill(starts.begin(), starts.end(), -1);

  for (int i = 0; i < 2 * n ; i++) {
    cin >> v[i];
    if (starts[v[i]] == -1) starts[v[i]] = i;
  }

  int result = 0;
  for (int i = 1; i <= n; i++){
    int cnt = 0;

    for (int j = starts[i] + 1; v[j] != i && j < v.size(); j++) {
      cnt++;
    }

    result = max(result, cnt);
  }

  cout << result;
}

/*
2  
1 1 2 2
4
1 2 2 4 3 1 3 4
4
1 2 3 4 4 3 2 1
*/