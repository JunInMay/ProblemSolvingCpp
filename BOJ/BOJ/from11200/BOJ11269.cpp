// https://www.acmicpc.net/problem/11269 2024-10-17 BOJ 11269 Cryptographer’s Conundrum
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  string per = "PER";

  int result = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != per[i % 3]) result++;
  }

  cout << result;
}