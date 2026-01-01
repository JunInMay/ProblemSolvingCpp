// https://www.acmicpc.net/problem/6812 2026-01-01 BOJ 6812 Good times
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int hours = n / 100;
  int minutes = n % 100;

  string cities[7] = {
    "Ottawa", "Victoria", "Edmonton", "Winnipeg", "Toronto", "Halifax", "St. John's"
  };
  int times[7] = {
    hours * 100 + minutes,
    ((hours - 3 + 24) % 24) * 100 + minutes,
    ((hours - 2 + 24) % 24) * 100 + minutes,
    ((hours - 1 + 24) % 24) * 100 + minutes,
    ((hours - 0 + 24) % 24) * 100 + minutes,
    ((hours + 1 + 24) % 24) * 100 + minutes,
    ((hours + 1 + 24) + ((minutes + 30) / 60)) % 24 * 100 + (minutes + 30) % 60,
  };

  for (int i = 0; i < 7; i++) {
    cout << times[i] << " in " << cities[i] << '\n';
  }
}

/*

0
-300
-200
-100
0
+100
+130

1300 in Ottawa
1000 in Victoria   
1100 in Edmonton
1200 in Winnipeg
1300 in Toronto
1400 in Halifax
1430 in St. John's
*/