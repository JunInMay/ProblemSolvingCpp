// https://www.acmicpc.net/problem/6491 2025-12-28 BOJ 6491 Perfection
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while(true) {
    int input;
    cin >> input;

    if (input == 0) break;

    int sum = 0;
    for (int i = 1; i * i < input; i++) {
      if (input % i == 0) {
        sum += i;
        if (i != 1) {
          sum += input / i;
        }
      }
    }

    string result = "PERFECT";
    if (sum > input) {
      result = "ABUNDANT";
    } else if (sum < input) {
      result = "DEFICIENT";
    }

    cout << input << ' ' << result << '\n';
  }
}