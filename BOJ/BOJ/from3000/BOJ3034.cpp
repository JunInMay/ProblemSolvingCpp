// https://www.acmicpc.net/problem/3034 2025-05-11 BOJ 3034 앵그리 창영
#include <iostream>

using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;

  while(n-- > 0) {
    string result = "DA";
    int input;
    cin >> input;

    if (w * w + h * h < input * input) result = "NE";

    cout << result << '\n';
  }
}