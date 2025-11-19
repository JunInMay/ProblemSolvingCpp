// https://www.acmicpc.net/problem/32778 2025-11-19 BOJ 32778 가희와 부역명
#include <iostream>

using namespace std;

int main() {
  string buf;
  getline(cin, buf);

  string sub = "-";
  
  if (buf.find('(') == string::npos && buf.find(')') == string::npos) {
    cout << buf << '\n';
  } else {
    int size = buf.find(')') - buf.find('(');
    cout << buf.substr(0, buf.find('(')) << '\n';
    sub = buf.substr(buf.find('(') + 1, size - 1);
  }

  cout << sub;
}