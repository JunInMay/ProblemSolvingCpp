// https://www.acmicpc.net/problem/32560 2025-10-01 BOJ 32560 Amalgram
#include <iostream>
#include <cmath>

using namespace std;

int count1[1000];
int count2[1000];

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  
  for (char& c : s1) {
    count1[c - 'a']++;
  }

  for (char& c : s2) {
    count2[c - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if(count1[i] || count2[i]) {
      for (int j = 0; j < max(count1[i], count2[i]); j++) {
        cout << (char)(i + 'a');
      }
    }
  }
}