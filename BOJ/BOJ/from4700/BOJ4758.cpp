// https://www.acmicpc.net/problem/4758 2025-04-07 BOJ 4758 Filling Out the Team
#include <iostream>

using namespace std;

int main() {
  while (true) {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) break;

    string result = "No positions";
    bool hasRole = false;
    if (a <= 4.5 && b >= 150 && c >= 200) {
      cout << "Wide Receiver ";
      hasRole = true;
    }
    if (a <= 6.0 && b >= 300 && c >= 500) {
      cout << "Lineman ";
      hasRole = true;
    }
    if (a <= 5.0 && b >= 200 && c >= 300) {
      cout << "Quarterback ";
      hasRole = true;
    }

    if (!hasRole) cout << result;
    cout << '\n';
  }
}