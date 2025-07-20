// https://www.acmicpc.net/problem/30454 2025-07-20 BOJ 30454 얼룩말을 찾아라!
#include <iostream>

using namespace std;

int getBlack(string& s) {
  bool beforeBlack = false;
  int result = 0;
  for(char& c : s) {
    if (c == '0') beforeBlack = false;
    else {
      if (beforeBlack) continue;
      else result++;
      beforeBlack = true;
    }
  }

  return result;
}

int main() {
  int n, l;
  cin >> n >> l;

  int maxBlack = -1;
  int count = 0;
  while(n-- > 0) {
    string z;
    cin >> z;

    int blacks = getBlack(z);
    if (blacks == maxBlack) count++;
    if (blacks > maxBlack) {
      maxBlack = blacks;
      count = 1;
    }
  }

  cout << maxBlack << ' ' << count;
}