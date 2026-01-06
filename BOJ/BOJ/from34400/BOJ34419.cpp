// https://www.acmicpc.net/problem/34419 2026-01-06 BOJ 34419 Tic-Tac-Toe Solver
#include <iostream>
#include <vector>

using namespace std;

char diagonalSolver(vector<string>& v) {
  char left = 'N', right = 'N';
  for (int i = 0; i < 3; i++) {
    char targetLeft = v[i][i];
    char targetRight = v[i][2 - i];
    if (i == 0) {
      left = targetLeft;
      right = targetRight;
    } else {
      if (left != targetLeft) left = 'N';
      if (right != targetRight) right = 'N';
    }
  }

  if (left != 'N' && left != 'E') return left;
  if (right != 'N' && right != 'E') return right;
  return 'N';
}

char isConcluded(char& c) {
  if (c == 'N' || c == 'E') return false;

  return true;
}

int main() {
  vector<string> v(3);
  
  for (int i = 0; i < 3; i++) {
    cin >> v[i];
  }

  char horizontal = 'N';
  char vertical = 'N';
  bool horizontalSolved = false, verticalSolved = false;
  for (int i = 0; i < 3; i++) {
    if (!isConcluded(horizontal)) {
      horizontal = 'N';
    } else {
      horizontalSolved = true;
    }
    if (!isConcluded(vertical)) {
      vertical = 'N';
    } else {
      verticalSolved = true;
    }
    for (int j = 0; j < 3; j++) {
      if (j == 0) {
        if (!horizontalSolved) horizontal = v[i][j];
        if (!verticalSolved) vertical = v[j][i];
      } else {
        if (v[i][j] != horizontal && !horizontalSolved) {
          horizontal = 'N';
        }
        if (v[j][i] != vertical && !verticalSolved) {
          vertical = 'N';
        }
      }
    }
  }

  char diagonal = diagonalSolver(v);
  char result = 'N';
  if (isConcluded(horizontal)) {
    result = horizontal;
  } else if (isConcluded(vertical)) {
    result = vertical;
  } else if (isConcluded(diagonal)) {
    result = diagonal;
  }
  cout << result;
}
/*
EEE
EEE
EEE

EXE
XEX
XEX

OEO
XXX
XEO
*/