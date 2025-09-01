// https://www.acmicpc.net/problem/31655 2025-09-01 BOJ 31655 International Dates
#include <iostream>
#include <sstream>

using namespace std;

int main() {
  string s;
  cin >> s;
  istringstream iss(s);
  
  string buffer;
  string dates[3];
  int idx = 0;
  while(getline(iss, buffer, '/')) {
    dates[idx++] = buffer;
  }

  int aa = stoi(dates[0]);
  int bb = stoi(dates[1]);

  string result = "either";
  if (aa > 12) result = "EU";
  else if (bb > 12) result = "US";

  cout << result;;
}