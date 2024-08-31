// https://www.acmicpc.net/problem/16944 BOJ 16944 강력한 비밀번호 2024-08-31
#include <iostream>
#include <cmath>

using namespace std;

bool isUpper(char c) {
  if ('A' <= c && c <= 'Z') return true;
  return false;
}

bool isLower(char c) {
  if ('a' <= c && c <= 'z') return true;
  return false;
}

bool isDigit(char c) {
  if ('0' <= c && c <= '9') return true;
  return false;
}

bool isSpecial(char c) {
  string special = "!@#$%^&*()-+";

  for (auto item : special) {
    if (item == c) return true;
  }

  return false;
}

bool upper, lower, special, digit;

int main() {
  int n;
  string s;
  cin >> n >> s;

  for (char c : s) {
    if (isUpper(c)) upper = true;
    if (isLower(c)) lower = true;
    if (isSpecial(c)) special = true;
    if (isDigit(c)) digit = true;
  }

  int needed = !upper + !lower + !special + !digit;
  
  cout << max(needed, 6 - (int)s.length());
}