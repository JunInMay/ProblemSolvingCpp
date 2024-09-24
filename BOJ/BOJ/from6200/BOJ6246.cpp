// https://www.acmicpc.net/problem/6246 2024-09-24 BOJ 6246 풍선 놀이
#include <iostream>

using namespace std;

bool hooked[10001];

int main() {
  int n, q;
  cin >> n >> q;

  while(q-- > 0) {
    int l, k;
    cin >> l >> k;

    for (int i = l; i <= n; i += k) hooked[i] = true;
  }

  int result = 0;
  for (int i = 1; i <= n; i++) {
    if (!hooked[i]) result++;
  }

  cout << result;
}