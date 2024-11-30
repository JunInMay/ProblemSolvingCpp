// https://www.acmicpc.net/problem/9443 2024-11-30 BOJ 9443 Arrangement of Contest
#include <iostream>

using namespace std;

bool isExists[100];

int main() {
  int n;
  cin >> n;

  while(n-- > 0) {
    string s;
    cin >> s;

    isExists[s[0] - 'A'] = true;
  }

  int result = 0;
  for (bool& b : isExists) {
    if (b) result++;
    else break;
  }

  cout << result;
}