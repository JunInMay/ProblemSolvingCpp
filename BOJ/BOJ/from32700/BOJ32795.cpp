// https://www.acmicpc.net/problem/32795 2025-07-03 BOJ 32795 Intuitive Elements
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    string abb;
    cin >> s >> abb;

    bool exists[100];
    fill(exists, exists+100, false);

    for (char& c : s) {
      exists[c-'a'] = true;
    }

    string result = "YES";
    for (char& c : abb) {
      if (!exists[c-'a']) result = "NO";
    }

    cout << result << '\n';
  }
}