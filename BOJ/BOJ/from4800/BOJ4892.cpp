// https://www.acmicpc.net/problem/4892 2025-05-12 BOJ 4892 숫자 맞추기 게임
#include <iostream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int idx = 1;
  while(true) {
    int n;
    cin >> n;
    if (n == 0) break;
    
    int n1 = 3 * n;
    int n2 = n1 % 2 == 0 ? n1 / 2 : (n1 + 1) / 2;
    int n3 = 3 * n2;
    int n4 = n3 / 9;

    string oddOrEven = "even";
    if (n1 % 2 == 1) oddOrEven = "odd";
    int result = n4;

    cout << idx++ << ". " << oddOrEven << ' ' << result << '\n';
  }
}