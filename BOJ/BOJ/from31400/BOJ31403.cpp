// https://www.acmicpc.net/problem/31403 BOJ 313403 $A + B - C$ 2024-08-01
#include <iostream>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  cout << stoi(a) + stoi(b) - stoi(c) << '\n';
  cout << stoi(a + b) - stoi(c);
}