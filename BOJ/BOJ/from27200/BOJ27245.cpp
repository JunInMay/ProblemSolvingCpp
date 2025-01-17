// https://www.acmicpc.net/problem/27245 2025-01-17 BOJ 27245 Комната
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double w, l, h;
  cin >> w >> l >> h;

  double shorter = min(w, l);
  double longer = max(w, l);

  string result = "bad";
  if (shorter / h >= 2 && longer / shorter<= 2) result = "good";
  
  cout << result;
}