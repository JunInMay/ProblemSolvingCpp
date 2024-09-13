// https://www.acmicpc.net/problem/21200 2024-09-13 BOJ 21200 Forced Choice
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, p, s;
  cin >> n >> p >> s;

  bool isValid[n + 1];
  fill(isValid, isValid + (n+1), true);

  while(s-- > 0) {
    int n;
    cin >> n;

    string result = "REMOVE";
    for (int i = 0; i < n; i++) {
      int card;
      cin >> card;

      if (card == p) result = "KEEP";
    }

    cout << result << '\n';
  }
}