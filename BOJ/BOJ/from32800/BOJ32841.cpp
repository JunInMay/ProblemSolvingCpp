// https://www.acmicpc.net/problem/32841 2025-01-23 BOJ 32841 Welcome Sign
#include <iostream>
#include <cmath>

using namespace std;

void printDot(int& n) {
  for (int i = 0; i < n; i++) cout << ".";
}

int main() {
  int r, c;
  cin >> r >> c;
  
  int such = 0;
  bool isOdd = false;
  for (int i = 0; i < r; i++) {
    string s;
    cin >> s;
    int size = s.size();
    int diff = c - size;

    int left = round((double) diff / 2);
    int right = round((double) diff / 2);

    if (diff % 2 == 1) {
      such++; 
      if (such % 2 == 1) left--;
      else right--;
    }

    printDot(left);
    cout << s;
    printDot(right);
    cout << '\n';
  }
}