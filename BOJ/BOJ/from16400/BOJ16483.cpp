// https://www.acmicpc.net/problem/16483 BOJ 16483 접시 안의 원 2024-07-27
/*
피타고라스 정리 a^2 + b^2 = c^2 를 이용. 그림 그려보자.

(T/2) ^ 2 + b ^2 = a^2 가 된다.
이항하면 a^2 - b^2 = (T/2)^2 가 된다.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double t;
  cin >> t;

  cout << (int)round((t/2) * (t/2)) << '\n';
}