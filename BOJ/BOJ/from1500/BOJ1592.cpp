// https://www.acmicpc.net/problem/1592 2024-09-11 BOJ 1592 영식이와 친구들
#include <iostream>

using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  
  int idx = 0;
  int cycle = 0;
  do {
    cycle++;
    idx = (idx + l) % n;
  } while(idx != 0);

  cout << cycle * (m - 1);

}