// https://www.acmicpc.net/problem/32642 2025-05-27 BOJ 32642 당구 좀 치자 제발
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  int per = 0;
  long long sum = 0;
  while(n-- > 0) {
    int num;
    cin >> num;

    if (num == 1) sum += ++per;
    else sum += --per;
  }

  cout << sum;
}