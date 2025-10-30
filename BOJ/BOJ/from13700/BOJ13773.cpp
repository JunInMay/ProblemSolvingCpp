// https://www.acmicpc.net/problem/13773 2025-10-30 BOJ 13773 Olympic Games
#include <iostream>

using namespace std;

int main() {
  while(true) {
    int n;
    cin >> n;

    if (n == 0) break;

    string result = "No summer games";
    if (1896 <= n && n % 4 == 0) {
      result = "Summer Olympics";
      if ((1914 <= n && n <= 1918) || (1939 <= n && n <= 1945)) {
        result = "Games cancelled";
      }
      if (2020 < n) {
        result = "No city yet chosen";
      }
    }

    cout << n << ' ' << result << '\n';
  }
}