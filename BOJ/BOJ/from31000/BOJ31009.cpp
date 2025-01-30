// https://www.acmicpc.net/problem/31009 2025-01-30 BOJ 31009 진주로 가자! (Easy)
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n;
  cin >> n;

  vector<int> prices;
  int jinju = -1;
  int count = 0;
  while (n-- > 0) {
    string s;
    int price;
    cin >> s >> price;

    if (s.compare("jinju") == 0) jinju = price;

    prices.push_back(price);
  }

  for (auto& price : prices) {
    if (jinju < price) count++;
  }

  cout << jinju << '\n';
  cout << count;
}