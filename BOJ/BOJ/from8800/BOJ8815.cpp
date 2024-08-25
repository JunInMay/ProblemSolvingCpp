// https://www.acmicpc.net/problem/8815 BOJ 8815 Test 2024-08-25
#include <iostream>

using namespace std;

string str = "BCBCDCDADABA";

int main() {
  int tc;
  cin >> tc;

  while(tc-- > 0) {
    int idx;
    cin >> idx;

    char result = ' ';

    if (idx == 1) result = 'A';
    else result = str[(idx - 2) % str.length()];

    cout << result << '\n';
  }
}