// https://www.acmicpc.net/problem/2774 2024-09-17 BOJ 2774 아름다운 수
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int input;
    cin >> input;

    bool isExists[10];
    fill(isExists, isExists+10, false);

    while(input > 0) {
      isExists[input % 10] = true;
      input /= 10;
    }

    int result = 0;
    for (auto& item : isExists)
      if (item) result++;
    
    cout << result << '\n';
  }
}