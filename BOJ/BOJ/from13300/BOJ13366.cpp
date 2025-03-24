// https://www.acmicpc.net/problem/13366 2025-03-24 BOJ 13366 Math Contest
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    int sum = 0;
    for (char& c : s) {
      sum += c - '0';
    }

    string result = "NO";
    if (sum % 9 == 0) {
      result = "YES";
    }

    cout << result << '\n';
  }
}