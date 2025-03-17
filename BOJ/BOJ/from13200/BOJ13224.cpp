// https://www.acmicpc.net/problem/13224 2025-03-17 BOJ 13224 Chop Cup
#include <iostream>

using namespace std;

int swap(int& now, int from, int to) {
  if (now == from) return to;
  else if (now == to) return from;
  return now;
}

int main() {
  string s;
  cin >> s;

  int result = 1;
  for (char& c : s) {
    int from = -1, to = -1;
    if (c == 'A') {
      from = 1;
      to = 2;
    } else if (c == 'B') {
      from = 2;
      to = 3;
    } else {
      from = 1;
      to = 3;
    }

    result = swap(result, from, to);
  }

  cout << result;
}