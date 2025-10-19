// https://www.acmicpc.net/problem/10990 2025-10-19 BOJ 10990 별 찍기 - 15
#include <iostream>

using namespace std;

void printSpace(int n) {
  for (int i = 0; i < n; i++) {
    cout << ' ';
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin >> n;

  for(int i = 0; i < n; i++) {
    printSpace(n - i - 1);
    if (i == 0) cout << '*';
    else {
      cout << '*';
      printSpace(1 + (i - 1) * 2);
      cout << '*';
    }
    cout << '\n';
  }
}