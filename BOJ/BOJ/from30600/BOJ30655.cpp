// https://www.acmicpc.net/problem/30655 2024-10-19 BOJ 30655 Pique Esconde
#include <iostream>
#include <algorithm>

using namespace std;

bool found[2000];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  while(1) {
    int n, m;
    cin >> n >> m;

    if (n == 0) break;
    
    fill(found, found+1500, false);
    found[m] = true;

    for (int i = 0; i < n - 2; i++) {
      int input;
      cin >> input;

      found[input] = true;
    }

    int result = -1;
    for (int i = 1; i <= n; i++) {
      if (!found[i]) result = i;
    }

    cout << result << '\n';
  }
}