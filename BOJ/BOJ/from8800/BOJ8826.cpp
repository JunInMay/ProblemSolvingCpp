// https://www.acmicpc.net/problem/8826 2025-07-30 BOJ 8826 Spacer
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int vc = 0, hc = 0, n;
    string s;
    cin >> n >> s;

    for(char& c : s) {
      switch(c) {
        case 'E':
          hc++;
        break;
        case 'W':
          hc--;
        break;
        case 'N':
          vc++;
        break;
        case 'S':
          vc--;
        break;
      }
    }

    cout << abs(vc) + abs (hc) << '\n';
  }
}