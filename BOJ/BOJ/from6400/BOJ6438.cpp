// https://www.acmicpc.net/problem/6438 2025-10-11 BOJ 6438 Reverse Text
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  string buf;
  for (int i = 0; i < n; i++) {
    getline(cin, buf);

    for (int i = 0; i < buf.size(); i++) {
      cout << buf[buf.size() - 1 - i];
    }

    cout << '\n';
  }
}