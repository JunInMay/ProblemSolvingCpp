// https://www.acmicpc.net/problem/5612 BOJ5612 터널의 입구와 출구 2024-07-17
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, current;
  cin >> n >> current;

  int maxCar = current;
  bool isNonsense = false;

  while (n-- > 0) {
    int in, out;
    cin >> in >> out;

    current += (in - out);
    if (current < 0) isNonsense = true;

    if (current > maxCar) maxCar = current;
  }

  if (isNonsense) maxCar = 0;
  cout << maxCar;
}