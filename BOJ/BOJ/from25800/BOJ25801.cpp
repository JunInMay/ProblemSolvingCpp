// https://www.acmicpc.net/problem/25801 2025-05-26 BOJ 25801 Odd/Even Strings
#include <iostream>

using namespace std;

int times[100];

int main() {
  string s;
  cin >> s;

  for (char& c : s) {
    times[c-'a']++;
  }

  string result = "0/1";
  bool isOdd = true;
  bool isEven = true;
  for (int i = 0; i < 26; i++) {
    if (times[i] == 0) continue;
    if (times[i] % 2 == 0) {
      isOdd = false;
    } else {
      isEven = false;
    }
  }

  if (isOdd && !isEven) {
    result = "1";
  } else if (!isOdd && isEven) {
    result = "0";
  }

  cout << result;
}