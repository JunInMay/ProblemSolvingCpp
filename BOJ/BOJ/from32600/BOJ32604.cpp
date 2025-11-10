// https://www.acmicpc.net/problem/32604 2025-11-10 BOJ 32604 Jumbled Scoreboards
#include <iostream>

using namespace std;

int ba, bb;

int main() {
  int n;
  cin >> n;

  string result = "yes";

  while(n-- > 0) {
    int a, b;
    cin >> a >> b;
    
    if (a >= ba && b >= bb) {
      ba = a;
      bb = b;
    } else {
      result = "no";
    }
  }

  cout << result;
}