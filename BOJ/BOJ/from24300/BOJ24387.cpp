// https://www.acmicpc.net/problem/24387 2024-11-03 BOJ 24387 ИЗЛОЖЕНИЕ НА ПЧЕЛЕН МЕД
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  long long a1, a2, a3, b1, b2, b3;
  cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

  vector<long long> as{{a1, a2, a3}};
  vector<long long> bs{{b1, b2, b3}};

  sort(as.begin(), as.end());
  sort(bs.begin(), bs.end());

  long long result = 0;
  for (int i = 0; i < 3; i++) {
    result += as[i] * bs[i];
  }

  cout << result;
}
/*
100000000 100000000 100000000
100000000 100000000 100000000

*/