// https://www.acmicpc.net/problem/10202 2025-03-05 BOJ 10202 Longest Subsequence
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int n;
    cin >> n;

    int maxLength = 0;
    int length = 0;
    for (int i = 0; i < n; i++) {
      char c;
      cin >> c;

      if (c == 'X') length++;
      else length = 0;

      maxLength = maxLength < length ? length : maxLength;
    }

    cout << "The longest contiguous subsequence of X's is of length " << maxLength << '\n';
  }
}