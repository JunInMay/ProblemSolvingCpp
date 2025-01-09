// https://www.acmicpc.net/problem/17598 2025-01-09 BOJ 17598 Animal King Election
#include <iostream>

using namespace std;

int main() {
  int lion = 0;
  for (int i = 0; i < 9; i++) {
    string s;
    cin >> s;

    if (s.compare("Lion") == 0) lion++;
  }

  string result = "Tiger";
  if (lion >= 5) result = "Lion";

  cout << result;
}