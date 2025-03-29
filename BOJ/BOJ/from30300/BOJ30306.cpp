// https://www.acmicpc.net/problem/30306 2025-03-29 BOJ 30306 Better Dice
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> v1;
  vector<int> v2;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    v1.push_back(num);
  }

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    v2.push_back(num);
  }

  int res1 = 0;
  int res2 = 0;
  for (int& n1 : v1) {
    for (int& n2 : v2) {
      if (n1 > n2) res1++;
      else if (n2 > n1) res2++;
    }
  }

  string result = "tie";
  if (res1 > res2) result = "first";
  else if (res1 < res2) result = "second";

  cout << result;
}