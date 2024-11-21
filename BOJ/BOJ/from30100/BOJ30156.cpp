// https://www.acmicpc.net/problem/30156 2024-11-21 BOJ 30156 Malvika is peculiar about color of balloons
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    string s;
    cin >> s;

    int a = 0, b = 0;
    for (char& c : s) {
      if (c == 'a') {
        a++;
      } else {
        b++;
      }
    }

    int result = a > b ? b : a;
    cout << result << '\n';
  }
}