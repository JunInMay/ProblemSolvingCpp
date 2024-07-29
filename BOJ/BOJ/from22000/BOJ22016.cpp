// https://www.acmicpc.net/problem/22016 BOJ 22016 巻物 (Scroll) 2024-07-29
#include <iostream>

using namespace std;

bool isUppercase(char& c) {
  if (c < 97) return true;
  return false;
}

void swap(char& c) {
  if (isUppercase(c)) c = c - 'A' + 'a';
  else c = c - 'a' + 'A';
}

int main() {
  int n, k;
  string s;
  cin >> n >> k >> s;

  string result = "";

  for (int i = 1; i <= n; i++) {
    char c = s[i - 1];
    if (i >= k) swap(c);

    result += c;
  }

  cout << result;
}


/*
3 2
Joi
*/