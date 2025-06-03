// https://www.acmicpc.net/problem/10178 2025-06-03 BOJ 10178 할로윈의 사탕
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n-- > 0) {
    int a, b;
    cin >> a >> b;

    cout << "You get " << a / b << " piece(s) and your dad gets " << a % b <<" piece(s).\n";
  }
}