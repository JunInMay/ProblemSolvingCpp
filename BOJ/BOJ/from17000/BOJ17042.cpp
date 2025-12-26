// https://www.acmicpc.net/problem/17042 2025-12-26 BOJ 17042 Elder
#include <iostream>

using namespace std;

bool owned[30];

int main() {
  char owner;
  int tc;
  cin >> owner >> tc;

  owned[owner - 'A'] = true;

  while (tc-- > 0) {
    char win, defeat;
    cin >> win >> defeat;

    if (defeat == owner) {
      owner = win;
      owned[win - 'A'] = true;
    }
  }

  int wizard = 0;
  for (bool& b : owned) {
    if (b) wizard++;
  }

  cout << owner << '\n' << wizard;
}