// https://www.acmicpc.net/problem/5343 2025-09-30 BOJ 5343 Parity Bit
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  while(n-- > 0) {
    string s;
    cin >> s;
    int length = s.length();

    int err = 0;
    for (int i = 0; i < length / 8; i++) {
      int cnt = 0;
      for (int j = 0; j < 8; j++) {
        if (s[j + i * 8] == '1') cnt++;
      }

      if (cnt % 2 != 0) err++;
    }

    cout << err << '\n';
  }
}