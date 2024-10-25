// https://www.acmicpc.net/problem/3047 2024-10-25 BOJ 3047 ABC
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int a, b, c;
  string s;
  cin >> a >> b >> c >> s;
  
  int arr[3] = { a, b, c };
  sort(arr, arr+3);
  
  cout << arr[s[0] - 'A'] << " " << arr[s[1] - 'A'] << " " << arr[s[2] - 'A'];
}