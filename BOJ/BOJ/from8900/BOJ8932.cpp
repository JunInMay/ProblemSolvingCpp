// https://www.acmicpc.net/problem/8932 2024-09-28 BOJ 8932 7종 경기
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<double> As = {9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
vector<double> Bs = {26.7, 75, 1.5, 42.5, 210, 3.8, 254};
vector<double> Cs = {1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};
vector<bool> Ps = {true, false, false, true, false, false, true};

int getPoint(int idx, int n) {
  double right = pow(n - Bs[idx], Cs[idx]);
  if (Ps[idx]) right = pow(Bs[idx] - n, Cs[idx]);
  int result = As[idx] * right;

  return result;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int tc;
  cin >> tc;

  while (tc-- > 0) {
    int result = 0;

    for (int i = 0; i < 7; i++) {
      int n;
      cin >> n;

      result += getPoint(i, n);
    }

    cout << result << '\n';
  }
}