// https://www.acmicpc.net/problem/16625 2025-04-19 BOJ 16625 Das Blinkenlights
#include <iostream>

using namespace std;

int getGcd(int a, int b) {
  while (b > 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int main() {
  int p, q, s;
  cin >> p >> q >> s;

  int gcd = getGcd(p, q);
  int lcm = p * q / gcd;

  string result = "no";
  if (lcm <= s) result = "yes";

  cout << result;
}