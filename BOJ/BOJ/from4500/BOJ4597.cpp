// https://www.acmicpc.net/problem/4597 2024-09-15 BOJ 4597 패리티
#include <iostream>

using namespace std;

int main() {
  string input;
  while (true) {
    cin >> input;
    if (input.compare("#") == 0) break;

    int ones = 0;
    for (int i = 0 ; i < input.size() - 1; i++)
      if (input[i] == '1') ones++;

    char cat = input[input.size() - 1];

    if (cat == 'e') {
      if (ones % 2 == 0) input[input.size() - 1] = '0';
      else input[input.size() - 1] = '1';
    } else {
      if (ones % 2 == 0) input[input.size() - 1] = '1';
      else input[input.size() - 1] = '0';
    }
    cout << input << '\n';
  }

}