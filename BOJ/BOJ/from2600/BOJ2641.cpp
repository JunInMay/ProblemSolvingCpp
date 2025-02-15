// https://www.acmicpc.net/problem/2641 2025-02-13 BOJ 2641 다각형그리기
#include <iostream>
#include <vector>

using namespace std;

int arr[101];
int revArr[101];
int reverseMap[5] = {
  0, 3, 4, 1, 2
};

int main() {
  int size;
  cin >> size;

  for (int i = 0; i < size; i++) {
    int n;
    cin >> n;

    arr[i] = n;
    revArr[i] = reverseMap[n];
  }

  int cnt;
  cin >> cnt;
  vector<vector<int>> v;

  int result = 0;
  vector<vector<int>> results;
  for (int i = 0; i < cnt; i++) {
    v.push_back({});
    for (int j = 0; j < size; j++) {
      int n;
      cin >> n;

      v[i].push_back(n);
    }
  }

  for (auto& candidate : v) {
    int start = 0;
    for (int i = 0; i < size; i++) {
      bool flag = true;
      bool revFlag = true;
      for (int j = 0; j < size; j++) {
        int idx = (i + j) % size;
        
        if (arr[idx] != candidate[j]) flag = false;
        if (revArr[size - idx - 1] != candidate[j]) revFlag = false;

        if (!flag && !revFlag) {
          break;
        }
      }

      if (flag == true || revFlag == true) {
        result++;
        results.push_back(candidate);
        break;
      }
    }
  }

  cout << result << '\n';
  for (auto& resVector : results) {
    for (auto& elem : resVector) {
      cout << elem << " ";
    }
    cout << '\n';
  }
}

/*
10
1 4 1 1 4 3 3 3 2 2
3
3 2 2 1 4 1 1 4 3 3
1 4 4 3 3 3 2 1 1 2
4 4 1 1 1 2 3 3 2 3
*/