// https://www.acmicpc.net/problem/6843 2025-03-16 BOJ 6843 Anagram Checker
#include <iostream>
#include <algorithm>

using namespace std;

string input() {
  string buf;
  getline(cin, buf);
  return buf;
}

void cnt(int* arr, string& s) {
  fill(arr, arr+30, 0);
  for (char& c : s) {
    if ('A' <= c && c <= 'Z') arr[c-'A']++;
  }
}

int main() {
  string s1 = input();
  string s2 = input();

  int count1[30];
  int count2[30];

  cnt(count1, s1);
  cnt(count2, s2);

  string result = "Is an anagram.";
  for (int i = 0; i < 30; i++) {
    if (count1[i] != count2[i]) {
      result = "Is not an anagram.";
    }
  }

  cout << result;
}