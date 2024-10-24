// https://www.acmicpc.net/problem/30281 2024-10-23 BOJ 30281 Saldainiai
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sum = 0;
  vector<int> odds;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;

    if (input % 2 == 1) odds.push_back(input);
    else sum += input;
  }

  sort(odds.begin(), odds.end(), [](int& a, int &b) {
    return a > b;
  });

  for (int i = 0; i < (odds.size() / 2) * 2; i++) {
    sum += odds[i];
  }

  cout << sum / 2;
}