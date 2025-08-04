// https://www.acmicpc.net/problem/4806 2025-08-03 BOJ 4806 줄 세기
#include <iostream>

using namespace std;

int main() {
  string buff;
  int cnt = 0;
  while(getline(cin, buff)) {
    cnt++;
  }

  cout << cnt;
}