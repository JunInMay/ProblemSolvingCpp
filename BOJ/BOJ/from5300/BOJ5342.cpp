// https://www.acmicpc.net/problem/5342 2024-11-18 BOJ 5342 Billing
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
  map<string, double> m {
    {"Paper", 57.99},
    {"Printer", 120.50},
    {"Planners", 31.25},
    {"Binders", 22.50},
    {"Calendar", 10.95},
    {"Notebooks", 11.20},
    {"Ink", 66.95},
  };

  double result;
  while(true) {
    string input;
    cin >> input;

    if (input.compare("EOI") == 0) break;

    result += m[input];
  }
  cout << fixed << setprecision(2) << "$" << result;
}