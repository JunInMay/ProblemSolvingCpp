// https://www.acmicpc.net/problem/10262 2024-12-25 BOJ 10262 주사위 게임
#include <iostream>

using namespace std;

double avg(int a, int b) {
  return (double)(a + b) / 2;
}

int main() {
  int f1, t1, f2, t2;
  int s1, e1, s2, e2;
  cin >> f1 >> t1 >> f2 >> t2 >> s1 >> e1 >> s2 >> e2;

  double gunnar = avg(f1, t1) + avg(f2, t2);
  double emma = avg(s1, e1) + avg(s2, e2);

  string result = "Tie";
  if (gunnar > emma) {
    result = "Gunnar";
  } else if (gunnar < emma) {
    result = "Emma";
  }

  cout << result;
}