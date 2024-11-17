// https://www.acmicpc.net/problem/10984 2024-11-17 BOJ 10984 내 학점을 구해줘
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int t;
  cin >> t;

  cout << fixed;
  while(t-- > 0) {
    int n;
    cin >> n;

    double sum = 0;
    double avg = 0;

    for (int i = 0; i < n; i++) {
      int c;
      double g;
      cin >> c >> g;

      sum += c;
      avg += g * c;
    }

    avg /= sum;

    cout << setprecision(0) << sum << " " << setprecision(1) << avg << '\n';
  }
}