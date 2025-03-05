// https://www.acmicpc.net/problem/14209 2025-03-03 BOJ 24209 Bridž
#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<char, int> table {
    {'A', 4}, {'K', 3}, {'Q', 2}, {'J', 1}
  };

  int result = 0;
  for (int i = 0; i < n; i++) {
    string line;
    cin >> line;

    for (char& c : line) {
      result += table[c];
    }
  }

  cout << result;
}