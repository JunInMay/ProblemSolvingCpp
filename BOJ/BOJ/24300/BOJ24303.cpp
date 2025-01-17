// https://www.acmicpc.net/problem/24303 2025-01-13 BOJ 24303 ПРЪЧКИ
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, l;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> l;
    
    vector<int> v;
    vector<int> as = {a1, a2, a3};
    vector<int> bs = {b1, b2, b3};

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < bs[i]; j++) {
        v.push_back(as[i]);
      }
    }

    sort(v.begin(), v.end(), [](int& l, int& r){
      return l > r;
    });

    int result = 0;
    for (int& e : v) {
      l -= e;
      result++;

      if (l <= 0) break;
    }

    if (l > 0) result = 0;

    cout << result;
}