// https://www.acmicpc.net/problem/10182 2025-11-23 BOJ 10182
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int n;
  cin >> n;

  cin.ignore();
  while(n-- > 0) {
    string input;
    getline(cin, input);

    string buffer;
    int idx = 0;
    istringstream iss = istringstream(input);
    string arr[3];
    while(getline(iss, buffer, ' ')) {
      arr[idx++] = buffer;
    }
    
    double result = (-log10(stod(arr[2])));
    if (arr[0].compare("OH") == 0) {
      result = 14 - (-log10(stod(arr[2])));
    }

    cout << fixed << setprecision(2) << result << '\n';
  }
}