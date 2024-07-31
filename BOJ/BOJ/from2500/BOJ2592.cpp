// https://www.acmicpc.net/problem/2592 BOJ 2592 대표값 2024-07-31
#include <iostream>

using namespace std;

int frequencies[1001];

int main() {
  int idx = 10;

  int sum = 0;
  while(idx-- > 0) {
    int n;
    cin >> n;

    frequencies[n / 10]++;
    sum += n;
  }

  int maxFrequency = 0;
  int maxNumber = -1;
  for (int i = 0; i < 1001; i++) {
    if (frequencies[i] >= maxFrequency) {
      maxNumber = i * 10;
      maxFrequency = frequencies[i];
    }
  }

  cout << sum / 10 << '\n' << maxNumber;
}