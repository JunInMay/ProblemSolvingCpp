// https://www.acmicpc.net/problem/14043 2024-10-12 BOJ 14043 Ragaman
#include <iostream>

using namespace std;

int sCount[27];
int tCount[27];

int main() {
  string s, t;
  cin >> s >> t;

  for (char& c : s) sCount[c-'a']++;
  for (char& c : t) {
    if (c != '*')
      tCount[c-'a']++;
  }

  string result = "A";
  for (int i = 0; i < 26; i++) {
    if (tCount[i] > sCount[i]) result = "N";
  }

  cout << result;
}