// https://www.acmicpc.net/problem/19155 2025-05-25 BOJ 19155 Copying Homework
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;

    cout << n - input + 1 << ' ';
  }
}