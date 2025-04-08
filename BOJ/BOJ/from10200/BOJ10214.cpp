// https://www.acmicpc.net/problem/10214 2025-04-08 BOJ 10214 Baseball
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int y = 0, k = 0;
    for (int i = 0; i < 9; i++) {
      int a, b;
      cin >> a >> b;

      y += a;
      k += b;
    }

    string result = "Draw";
    if (y > k) result = "Yonsei";
    else if (y < k) result = "Korea";

    cout << result << '\n';
  }
}