// https://www.acmicpc.net/problem/27058 2025-04-06 BOJ 27058 Message Decowding
#include <iostream>

using namespace std;

int main() {
  string table;
  cin >> table;

  cin.ignore();
  string s;
  getline(cin, s);

  for (char c : s) {
    char now = ' ';

    if (c != ' ') {
      int diff = 'a';
      if (c <= 'Z') diff = 'A';

      int idx = c - diff;

      now = table[idx] - 'a' + diff;
    }

    cout << now;
  }
}