// https://www.acmicpc.net/problem/5691 BOJ 5691 평균 중앙값 문제 2024-07-21
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while(true) {
    long long a, b;
    cin >> a >> b;

    if (a == 0 && b == 0) break;

    long long avg = a < b ? a : b;
    long long higher = a < b ? b : a;

    cout << avg - abs(higher - avg) << '\n';
  }
}