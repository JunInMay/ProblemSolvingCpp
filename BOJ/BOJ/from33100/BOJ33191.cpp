// https://www.acmicpc.net/problem/33191 2025-08-28 BOJ 33191 Yalda
#include <iostream>

using namespace std;

int main() {
  int b, x, y, z;
  cin >> b >> x >> y >> z;

  string result = "Nothing";
  if(x <= b) {
    result = "Watermelon";
  } else if (y <= b) {
    result = "Pomegranates";
  } else if (z <= b) {
    result = "Nuts";
  }

  cout << result;
}