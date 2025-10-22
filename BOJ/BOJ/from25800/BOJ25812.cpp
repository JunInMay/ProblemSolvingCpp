// https://www.acmicpc.net/problem/25812 2025-10-22 BOJ 25812 Nice Raises
#include <iostream>

using namespace std;

int main() {
  int n, s;
  cin >> n >> s;

  int one = 0;
  int two = 0;
  while (n-- > 0) {
    int member;
    cin >> member;

    if (member > s) {
      two++;
    } else if (member < s) {
      one++;
    }
  }

  int result = 0;
  if (one > two) {
    result = 1;
  } else if (one < two) {
    result = 2;
  }

  cout << result;
}