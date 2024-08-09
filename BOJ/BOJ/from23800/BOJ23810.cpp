// https://www.acmicpc.net/problem/23810 BOJ 23810 골뱅이 찍기 - 뒤집힌 ㅋ 2024-08-09
#include <iostream>

using namespace std;

string line = "@@@@@";
string single = "@";

void print(string& s, int& times) {
  for (int i = 0; i < times; i++) {
    for (int j = 0; j < times; j++) {
      cout << s;
    }
    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;

  print(line, n);
  print(single, n);
  print(line, n);
  print(single, n);
  print(single, n);
}