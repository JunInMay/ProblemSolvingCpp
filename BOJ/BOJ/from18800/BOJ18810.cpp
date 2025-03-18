// https://www.acmicpc.net/problem/18810 2025-03-18 BOJ 18810 Amazing Sushi - ChatGPT 해설 보고 풀이
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

  int k_min = max(0, minA - sum);
  int k_max = min(remains, maxA - sum);

  int k2_min = max(0, sum + remains - maxB);
  int k2_max = min(remains, sum + remains - minB);

  int left = max(k_min, k2_min);
  int right = min(k_max, k2_max);

  if (left <= right) cout << "Yes\n";
  else cout << "No\n";


  // cout << result;
}