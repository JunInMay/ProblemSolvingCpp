// https://www.acmicpc.net/problem/11176 2025-05-10 BOJ 11176 In the Shower
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int standard, ea;
    cin >> standard >> ea;

    int result = 0;
    while(ea-- > 0) {
      int shampoo;
      cin >> shampoo;

      if (shampoo > standard) result++;
    }

    cout << result << '\n';
  }
}