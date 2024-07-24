// https://www.acmicpc.net/problem/10829 BOJ 10829 이진수 변환 2024-07-24
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  string s;
  while (n > 0) {
    s += to_string(n % 2);
    n /= 2;
  }

  for (int i = s.length() - 1; i >= 0; i--) {
    cout << s[i];
  }
}

/*
10
1000000000000000

*/