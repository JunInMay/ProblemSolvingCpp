// https://www.acmicpc.net/problem/28289 2025-09-10 BOj 28289 과 조사하기
#include <iostream>

using namespace std;

int main() {
  int p;
  cin >> p;

  int results[4] = {0, 0, 0, 0};
  while(p-- > 0) {
    int g, c, n;
    cin >> g >> c >> n;

    if (g > 1) {
      switch (c) {
        case 1:
        case 2:
          results[0]++;
          break;
        case 3:
          results[1]++;
          break;
        case 4:
          results[2]++;
          break;
      }
    } else {
      results[3]++;
    }
  }

  for (auto& e : results) {
    cout << e << '\n';
  }
}