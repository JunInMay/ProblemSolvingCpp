// https://www.acmicpc.net/problem/6139 2025-05-14 BOJ 6139 Speed Reading
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  while(k-- > 0) {
    int s, t, r;
    cin >> s >> t >> r;

    int readingAmount = s * t;
    int restCount = ceil((double)n / readingAmount) - 1;
    int takenReadingTime = ceil((double)n / s);
    
    int something = 0;
    int result = takenReadingTime + restCount * r;

    cout << result << '\n';
  }
}