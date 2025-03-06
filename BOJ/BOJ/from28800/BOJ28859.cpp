// https://www.acmicpc.net/problem/28859 2025-03-06 BOJ 28859 Капли
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n, unitTime, sumTime;
  cin >> n >> unitTime >> sumTime;

  int units = sumTime / unitTime;
  int mod = sumTime % unitTime;

  long long result = 0;
  while(n-- > 0) {
    int num;
    cin >> num;

    result += (unitTime / num) * units + (mod / num);
  }

  cout << result;
}