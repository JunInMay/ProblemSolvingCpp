// https://www.acmicpc.net/problem/31277 2025-03-10 BOJ 31277 ЧИСЛОВА РЕДИЦА
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int s;

int getGroup(vector<int>& v) {
  bool exists[10];
  int result = 0;

  for (int i = 0; i < s - 3; i++) {
    fill(exists, exists+10, false);

    bool isMade = true;
    for (int j = 0; j < 4; j++) {
      int num = v[i+j];
      if (exists[num]) {
        isMade = false;
      }
      exists[num] = true;
    }

    if (isMade) {
      result++;
    }
  }
  return result;
}

int main() {
  cin >> s;
  vector<int> v;

  int before = -1;
  int cons = 1;
  int maxCons = -1;
  for (int i = 0; i < s; i++) {
    int num;
    cin >> num;

    if (before != num) {
      before = num;
      cons = 1;
    } else {
      cons++;
    }
    maxCons = max(maxCons, cons);
    
    v.push_back(num);
  }

  int consecutive = maxCons;
  int group = getGroup(v);

  cout << consecutive << " " << group;
}