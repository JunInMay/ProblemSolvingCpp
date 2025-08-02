// https://www.acmicpc.net/problem/5361 2025-08-02 BOJ 5361 전투 드로이드 가격
#include <iostream>
#include <iomanip>

using namespace std;

void getInput(int* inputs, int& idx) {
  cin >> inputs[idx];
}

int main() {
  int n;
  cin >> n;

  int inputCount = 5;

  int inputs[inputCount];
  double prices[5] = {
    350.34, 230.90, 190.55, 125.30, 180.90000000,
  };

  cout << fixed << setprecision(2);
  while (n-- > 0) {
    double result = 0;

    for (int i = 0; i < inputCount ;i++) {
      getInput(inputs, i);
      result += inputs[i] * prices[i];
    }

    cout << "$" << result << '\n';
  }
}