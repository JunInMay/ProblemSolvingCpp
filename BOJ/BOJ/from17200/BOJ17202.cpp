// https://www.acmicpc.net/problem/17202 BOJ 17202 핸드폰 번호 궁합 2024-09-09
#include <iostream>

using namespace std;

int numbers[16];

int main() {
  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i < 8; i++) {
    numbers[i * 2] = s1[i] - '0';
    numbers[i * 2 + 1] = s2[i] - '0';
  }

  for (int i = 15; i > 1; i--) {
    for (int j = 0; j < i; j++) {
      numbers[j] = (numbers[j] + numbers[j+1]) % 10;
    }
  }

  cout << numbers[0] << numbers[1];
}