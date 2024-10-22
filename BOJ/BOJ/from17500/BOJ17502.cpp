// https://www.acmicpc.net/problem/17502 2024-10-22 BOJ 17502 클레어와 팰린드롬
#include <iostream>

using namespace std;

char result[1000];

int main() {
  int n;
  string s;
  cin >> n >> s;
  result[n] = '\0';

  if (n % 2 == 1) {
    if (s[n/2] != '?') result[n/2] = s[n/2];
    else result[n/2] = 'a';
  }

  for (int i = 0; i < n / 2; i++) {
    int lIdx = i;
    int rIdx = s.size() - 1 - i;
    char left = s[lIdx];
    char right = s[rIdx];

    char current = 'a';

    if (left == right && left != '?') current = left;
    else if (left == '?' && right == '?') current = 'a';
    else if (left == '?') current = right;
    else current = left;
    
    result[lIdx] = current;
    result[rIdx] = current;
  }

  cout << result;
}