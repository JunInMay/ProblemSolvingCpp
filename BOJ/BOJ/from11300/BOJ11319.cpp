// https://www.acmicpc.net/problem/11319 2025-07-15 BOJ 11319 Count Me In
#include <iostream>

using namespace std;

bool isVowel[200];

int main() {
  int n;
  cin >> n;

  string vowels = "aeiou";
  for (char& c : vowels) isVowel[c - 'a'] = true;

  cin.ignore();

  string buf;
  for (int i = 0; i < n; i++) {
    getline(cin, buf);

    int vowelCount = 0, consCount = 0;

    for (char& c : buf) {
      if (c == ' ') continue;
      if ('A' <= c && c <= 'Z') c = c - 'A' + 'a';

      if (isVowel[c -'a']) vowelCount++;
      else consCount++;
    }

    cout << consCount << " " << vowelCount << '\n';
  }
}