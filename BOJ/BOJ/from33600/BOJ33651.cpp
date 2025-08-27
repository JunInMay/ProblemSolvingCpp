// https://www.acmicpc.net/problem/33651 2025-08-27 BOJ 33651 Vandalism
#include <iostream>

using namespace std;

int main() {
  string s;

  cin >> s;
  string uapc = "UAPC";

  for (char& c : uapc) {
    bool found = false;
    for (char& sc : s) {
      if (c == sc) found = true;
    }

    if (!found) cout << c;
  }
}