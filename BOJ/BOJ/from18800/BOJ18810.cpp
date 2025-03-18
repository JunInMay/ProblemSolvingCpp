// https://www.acmicpc.net/problem/18810 2025-03-18 BOJ 18810 Amazing Sushi
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n;
  cin >> n;

  int minA, maxA, minB, maxB;
  cin >> minA >> maxA >> minB >> maxB;

  int remains = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    sum += num/2;
    remains += num%2;
  }

  string result = "No";

  // 가장 적게 먹을 수 있는 값이 범위 내에 들어오고, 가장 많이 먹을 수 있는 값도 범위내에 들어올 수 있는 경우.
  int verifier = remains + sum * 2;
  if (minA + minB <= verifier && verifier <= maxA + maxB) {
    int neededA = max(0, minA - sum);
    int neededB = max(0, minB - sum);
    int acceptableA = max(0, maxA - sum);
    int acceptableB = max(0, maxB - sum);

    if (neededA + neededB <= remains) {
      remains -= (neededA + neededB);
      if (remains <= acceptableA + acceptableB) result = "Yes";
    }
  }

  cout << result;
}