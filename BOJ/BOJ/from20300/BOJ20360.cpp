// https://www.acmicpc.net/problem/20360 2025-06-16 BOJ 20360 Binary numbers
#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  int bit = 0;
  while(n > 0) {
    if (n % 2 == 1) cout << bit << " ";
    n /= 2;
    
    bit++;
  }
}