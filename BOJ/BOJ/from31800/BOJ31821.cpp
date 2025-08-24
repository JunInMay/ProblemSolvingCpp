// https://www.acmicpc.net/problem/31821 2025-08-24 BOJ 31821 학식 사주기
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int prices[n];
  for (int i = 0; i < n; i++) {
    cin >> prices[i];
  }

  int s;
  cin >> s;

  long long result = 0;

  while(s-- > 0) {
    int idx;
    cin >> idx;
    result += prices[idx - 1];
  }

  cout << result;
}
