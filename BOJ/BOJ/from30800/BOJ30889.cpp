// https://www.acmicpc.net/problem/30889 2025-10-20 BOJ 30889 좌석 배치도
#include <iostream>
#include <algorithm>

using namespace std;

char seats[30][30];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;
  fill(&seats[0][0], &seats[29][30], '.');

  while(n-- > 0) {
    string s;
    cin >> s;

    int row = s[0] - 'A';
    int col = 0;
    for (int i = 1; i < s.length(); i++) {
      col = col * 10 + (s[i] - '0');
    }

    seats[row][col - 1] = 'o';
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 20; j++) {
      cout << seats[i][j];
    }
    cout << '\n';
  }
}


/*
10
A20
B20
C20
D20
E20
F20
G20
H20
I20
J20
*/