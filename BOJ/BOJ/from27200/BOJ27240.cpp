// https://www.acmicpc.net/problem/27240 2025-05-18 BOJ 27240 Электричка
#include <iostream>

using namespace std;

int main() {
  int n, a, b, from, to;
  cin >> n >> a >> b >> from >> to;

  string result = "Full";
  if ((from <= a && to <= a) || (b <= from && b <= to)) {
    result = "Outside";
  } else if (a < from && from < b && a < to && to < b) result = "City";

  cout << result;
}