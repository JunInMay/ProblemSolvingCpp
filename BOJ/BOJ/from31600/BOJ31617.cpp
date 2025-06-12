// https://www.acmicpc.net/problem/31617 2025-06-12 BOJ 31617 差 (Difference)
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  map<int, int> mapp;
  vector<int> ns;

  int k, n, m;
  cin >> k >> n;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    ns.push_back(input);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    int input;
    cin >> input;

    if (mapp.find(input) == mapp.end()){
      mapp[input] = 0;
    }
    mapp[input]++;
  }

  long long result = 0;
  for (int& e : ns) {
    mapp.find(e + k) != mapp.end() ? result += mapp[e + k] : 0;
  }

  cout << result;
}