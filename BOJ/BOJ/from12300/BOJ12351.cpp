// https://www.acmicpc.net/problem/12351 2026-01-23 BOJ 12351 Hedgemony (Small)
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
  int t;
  cin >> t;

  cout << fixed << setprecision(6);

  for (int i = 1; i <= t; i++) {
    int count;
    cin >> count;
    vector<double> v(count);

    for (int j = 0; j < count; j++) {
      cin >> v[j];
    }

    for (int j = 1; j < count - 1; j++) {
      double left = v[j - 1];
      double right = v[j + 1];
      double avg = (left + right) / 2;

      if (v[j] > avg) {
        v[j] = avg;
      }
    }

    cout << "Case #" << i << ": " << v[count - 2] << '\n';
  }
}