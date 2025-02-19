// https://www.acmicpc.net/problem/6889 2025-02-19 BOJ 6889 Smile with Similes
#include <iostream>

using namespace std;

string adjs[5];
string nouns[5];

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> adjs[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> nouns[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << adjs[i] << " as " << nouns[j] << '\n';
    }
  }
}