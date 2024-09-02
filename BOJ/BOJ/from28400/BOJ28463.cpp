// https://www.acmicpc.net/problem/28463 BOJ 28463 Toe Jumps 2024-09-02
#include <iostream>

using namespace std;

void rotate(string& s, int count) {

  for (int i = 0; i < count; i++) {
    string temp = s;
    s[0] = temp[2];
    s[1] = temp[0];
    s[2] = temp[3];
    s[3] = temp[1];
  }

}

int main() {
  char direction;
  cin >> direction;

  string jump = "";
  for (int i = 0; i < 2; i++) {
    string input;
    cin >> input;

    jump += input;
  }

  int rotation = 0;
  if (direction == 'W') rotation = 3;
  else if (direction == 'N') rotation = 2;
  else if (direction == 'E') rotation = 1;

  rotate(jump, rotation);
  string candidates[3] = {
    ".OP.",
    "I..P",
    "O..P"
  };

  string result = "?";
  for (int i = 0; i < 3; i++) {
    if (candidates[i] == jump) {
      if (i == 0) result = "T";
      else if (i == 1) result = "F";
      else if (i == 2) result = "Lz";
    }
  }

  cout << result;
}