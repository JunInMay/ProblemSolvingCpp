#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;
  vector<int> v;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
    sum += input;
  }

  int result = 1000000001;
  int tmp = 0;
  for (int i = 0; i < n - 1; i++) {
    tmp += v[i];
    result = min(result, abs(tmp * 2 - sum));
  }

  cout << result;
  
}