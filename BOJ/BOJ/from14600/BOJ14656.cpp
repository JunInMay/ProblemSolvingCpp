// https://www.acmicpc.net/problem/14656 2025-12-02 BOJ 14656 조교는 새디스트야!!
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = 0;
  for (int i = 1; i <= n; i++) {
    int nn;
    cin >> nn;

    if (nn != i) result++;
  }

  cout << result;
}