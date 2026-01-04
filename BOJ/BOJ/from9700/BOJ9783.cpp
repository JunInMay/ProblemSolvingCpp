// https://www.acmicpc.net/problem/9783 2026-01-04 BOJ 9783 Easy Encryption
#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);

  for (char& c : s) {
    char out = c;
    char prep = ' ';
    if ('a' <= c && c <= 'z') {
      out = ((c - 'a' + 1) % 10) + '0';
      prep = ((c - 'a' + 1) / 10) + '0';
    } else if ('A' <= c && c <= 'Z') {
      out = ((c - 'A' + 27) % 10) + '0';
      prep = ((c - 'A' + 27) / 10) + '0';
    } else if ('0' <= c && c <= '9') {
      prep = '#';
    }

    if (prep != ' ') {
      cout << prep;
    }
    cout << out;
  }
}