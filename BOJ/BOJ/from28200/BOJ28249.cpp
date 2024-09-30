// https://www.acmicpc.net/problem/28249 2024-09-30 BOJ 28249 Chili Peppers
#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string, int> m = {
    {"Poblano", 1500},
    {"Mirasol", 6000},
    {"Serrano", 15500},
    {"Cayenne", 40000},
    {"Thai", 75000},
    {"Habanero", 125000}
  };

  int n;
  cin >> n;

  long long result = 0;
  while (n-- > 0) {
    string input;
    cin >> input;

    result += m[input];
  }

  cout << result;
}

/*
4
Poblano
Cayenne
Thai
Poblano
*/