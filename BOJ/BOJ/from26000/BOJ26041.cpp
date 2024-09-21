// https://www.acmicpc.net/problem/26041 2024-09-21 BOJ 26041 비슷한 전화번호 표시
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  string input;
  getline(cin, input);

  vector<string> v;
  string buffer;
  istringstream iss(input);
  while(getline(iss, buffer, ' '))
    v.push_back(buffer);

  string head;
  cin >> head;

  int result = 0;
  for (auto& s : v) {
    if (s.size() <= head.size()) continue;

    if (s.substr(0, head.size()).compare(head) == 0) result++;
  }

  cout << result << '\n';
}