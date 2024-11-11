// https://www.acmicpc.net/problem/14915 2024-11-11 BOJ 14915 진수 변환기
#include <iostream>
#include <stack>

using namespace std;

char nums[20];

int main() {
  int n, m;
  cin >> n >> m;

  if (n == 0) {
    cout << n;
    return 0;
  }

  for (int i = 0; i < 10; i++) {
    nums[i] = '0' + i;
  }
  for (int i = 0; i < 6; i++) {
    nums[i + 10] = 'A' + i;
  }

  stack<char> result;

  while(n > 0) {
    int mod = n % m;

    result.push(nums[mod]);

    n /= m;
  }

  while (!result.empty()) {
    cout << result.top();
    result.pop();
  }
}