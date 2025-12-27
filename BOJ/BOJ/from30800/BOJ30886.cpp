// https://www.acmicpc.net/problem/30886 2025-12-27 BOJ 30886 Artistic Souvenir
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double prs;
  cin >> prs;

  double pi = M_PI;

  cout << fixed << setprecision(10) << pow((sqrt(prs / M_PI) + 1) * 2, 2);
}