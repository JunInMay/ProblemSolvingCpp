// https://www.acmicpc.net/problem/11262 2025-04-27 BOJ 11262 Minions’ Master
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double roundOn(double number, int digit) {
  double power = pow(10, digit);
  return round(number * power) / power;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  cout << fixed << setprecision(3);

  while(tc-- > 0) {
    int n;
    cin >> n;

    double powers[2000];

    double sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> powers[i];
      sum += powers[i];
    }

    double average = sum / n;
    double count = 0;
    for (int i = 0; i < n; i++) {
      if (powers[i] > average) count++;
    }

    double percentage = roundOn((count / n) * 100, 3);

    cout << roundOn(average, 3) << ' ' << roundOn(percentage, 3) << "%\n";
  }
}