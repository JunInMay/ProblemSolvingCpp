// https://www.acmicpc.net/problem/27334 2025-02-15 BOJ 27334 マラソン大会 (Marathon Race)
#include <iostream>

using namespace std;

int records[1000];

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) cin >> records[i];

  for (int i = 0; i < n; i++) {
    int rank = 1;
    for (int j = 0; j < n; j++) {
      if (records[j] < records[i]) rank++;
    }

    cout << rank << '\n';
  }
}