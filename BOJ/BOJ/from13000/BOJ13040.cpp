// https://www.acmicpc.net/problem/13040 BOJ 13040 Important Test 2024-07-25
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int tc, timeLimit, copyingTime;
  cin >> tc >> timeLimit >> copyingTime;

  while(tc-- > 0) {
    vector<int> v;
    int tasks;
    cin >> tasks;

    while(tasks-- > 0) {
      int n;
      cin >> n;
      
      v.push_back(n);
    }

    int maxTime = -1;
    int sumTime = 0;
    int count = 0;
    bool copied = false;
    for (int i = 0; i < v.size(); i++) {
      sumTime += v[i];
      maxTime = max(maxTime, v[i]);

      if (sumTime > timeLimit) {
        int ifCopiedTime = sumTime - maxTime + copyingTime;

        if (copied || ifCopiedTime > timeLimit) break;

        copied = true;
        count++;
        sumTime = ifCopiedTime;
      } else {
        count++;
      }
    }

    cout << count << '\n';
  }
}