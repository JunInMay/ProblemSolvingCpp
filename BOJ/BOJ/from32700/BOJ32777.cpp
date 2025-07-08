// https://www.acmicpc.net/problem/32777 2025-07-08 BOJ 32777 가희와 서울 지하철 2호선
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  while(n-- > 0) {
    int from, to;
    cin >> from >> to;
    from -= 201;
    to -= 201;

    int inner = from < to ? to - from : 43 - from + to;
    int outer = from < to ? 43 - to + from : from - to;

    string result = "Same";
    if (inner > outer) {
      result = "Outer circle line";
    } else if (inner < outer) {
      result = "Inner circle line";
    }

    cout << result << '\n';
  }
}