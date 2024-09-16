// https://www.acmicpc.net/problem/27542 2024-09-16 BOJ 27542 絶対階差数列 (Sequence of Absolute Differences)
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }

  int result = 0;
  for (int i = 0; i < n-1; i++) {
    vector<int> resultVector;
    for (int j = 0; j < v.size()-1; j++) {
      resultVector.push_back(abs(v[j] - v[j+1]));
    }

    v = resultVector;
    result = v[0];
  }

  cout << result;
}