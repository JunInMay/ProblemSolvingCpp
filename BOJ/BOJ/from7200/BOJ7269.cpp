// https://www.acmicpc.net/problem/7269 2025-01-26 BOJ 7269 Lygtys
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;

  vector<long long> nums;
  vector<long long> result;

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    long long num;
    cin >> num;

    nums.push_back(num);

    if (i < n - 1) sum += num;
  }

  long long last = *(nums.end()-1);
  last = (sum - last) / (n - 2);
  nums[nums.size() - 1] = last * 2;

  for (auto& num : nums) {
    cout << num - last << '\n';
  }
}