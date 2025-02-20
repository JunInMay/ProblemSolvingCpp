// https://www.acmicpc.net/problem/6177 2025-02-20 BOJ 6177 Statistics
#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int numbers[1000];

int main() {
  int n;
  cin >> n;

  double sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> numbers[i];
    sum += numbers[i];
  }

  sort(numbers, numbers + n);
  double median = ((double)numbers[(n-1)/2] + numbers[n/2]) / 2;
  double avg = sum / n;

  cout << fixed << setprecision(6);
  cout << avg << '\n' << median << '\n';
}

/*
4
1
10
20
100


*/