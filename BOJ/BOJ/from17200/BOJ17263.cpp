// https://www.acmicpc.net/problem/17263 2025-04-03 BOJ 17263 Sort 마스터 배지훈
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n;
  cin >> n;

  int result = -1;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (num > result) result = num;
  }

  cout << result;
}