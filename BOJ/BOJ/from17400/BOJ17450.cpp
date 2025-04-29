// https://www.acmicpc.net/problem/17450 2025-04-29 BOJ 17450 과자 사기
#include <iostream>

using namespace std;

double gasungbi(double p, double w) {
  return w / p;
}

int main() {
  double p1, p2, p3, w1, w2, w3;
  cin >> p1 >> w1 >> p2 >> w2 >> p3 >> w3;

  p1 = p1 * 10;
  p2 = p2 * 10;
  p3 = p3 * 10;

  p1 = p1 >= 5000 ? p1 - 500 : p1;
  p2 = p2 >= 5000 ? p2 - 500 : p2;
  p3 = p3 >= 5000 ? p3 - 500 : p3;

  double g1, g2, g3;
  g1 = w1 / p1;
  g2 = w2 / p2;
  g3 = w3 / p3;

  string result = "";
  if (g1 >= g2 && g1 >= g3) result = "S";
  else if (g2 >= g1 && g2 >= g3) result = "N";
  else if (g3 >= g2 && g3 >= g1) result = "U";

  cout << result;
}