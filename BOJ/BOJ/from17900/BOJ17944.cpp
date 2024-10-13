// https://www.acmicpc.net/problem/17944 2024-10-13 BOJ 17944 퐁당퐁당 1
#include <iostream>

using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  int remainder = t % (2 * 2 * n - 2);
  if (remainder == 0) remainder = 2 * 2 * n - 2;

  bool isDescending = remainder > n * 2;

  int result = remainder;
  if (isDescending) result = n * 2 - (remainder % (n * 2));

  cout << result;
}

/*
3 1
1
3 3
3
3 6
6
3 7
5
3 8
4
3 9
3
3 10 = 중요 케이스
2
3 11
1
3 12
2



*/