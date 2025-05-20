// https://www.acmicpc.net/problem/4697 20205-05-20 BOJ 4697 Fifty Coats of Gray
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  while(true) {
    int n, width, length, height, area, m;
    cin >> n >> width >> length >> height >> area >> m;

    if (n == 0) break;

    int sum = width * length * 1 + width * height * 2 + length * height * 2;
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;

      sum -= x * y;
    }
    sum *= n;
    
    cout << ceil((double)sum / area) << '\n';
  }
}