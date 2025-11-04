// https://www.acmicpc.net/problem/24334 2025-11-04 SD КАРТИ
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  int minutes = 0;
  while(n-- > 0) {
    int h, m;
    cin >> h >> m;

    minutes += h * 60 + m;
  }

  int result = 99999999;
  for (int a = 0; a <= ceil((double)minutes / 240); a++) {
    int b = ceil((double)max(0, (minutes - (a * 240))) / 180);
    
    result = min(result, a * 1090 + b * 915);
  }

  cout << result / 100 << '.' << setfill('0') << setw(2) << result % 100;
}