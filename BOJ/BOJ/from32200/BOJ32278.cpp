// https://www.acmicpc.net/problem/32278 2024-11-13 BOJ 32278 선택 가능성이 가장 높은 자료형
#include <iostream>
#include <cmath>

using namespace std;

long long pp(long long n, long long p) {
  long long res = 1;
  for (int i = 0; i < p; i++) {
    res *= n;
  }

  return res;
}

int main() {
    string results[] = {
        "short", "int", "long long"
    };

    long long mins[] = {
        -pp(2, 15),
        -pp(2, 31),
        -pp(2, 63)
    };
    
    long long maxs[] = {
        pp(2, 15) - 1,
        pp(2, 31) - 1,
        pp(2, 63) - 1
    };
    
    long long n;
    cin >> n;
    
    int idx;
    for (idx = 0; idx < 3; idx++) {
        if (mins[idx] <= n && n <= maxs[idx]) {
          break;
        }
    }
    
    cout << results[idx];
}