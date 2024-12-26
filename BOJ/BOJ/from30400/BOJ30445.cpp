// https://www.acmicpc.net/problem/30445 2024-12-26 BOJ 30445 행복 점수
#include <iostream>
#include <map>
#include <iomanip>
#include <cmath>

using namespace std;

map<char, bool> happy = {
  {'H', true},
  {'A', true},
  {'P', true},
  {'Y', true},
};

map<char, bool> sad = {
  {'S', true},
  {'A', true},
  {'D', true},
};

int main() {
  string s;
  getline(cin, s);

  double happiness = 0;
  double sadness = 0;
  for (char& c : s) {
    if (happy.find(c) != happy.end()) {
      happiness++;
    }

    if (sad.find(c) != sad.end()) {
      sadness++;
    }
  }

  double result = (happiness / (happiness + sadness)) * 100;
  if (happiness == 0 && sadness == 0)  result = 0.5 * 100;

  cout << fixed << setprecision(2);
  cout << round(result * 100) / 100;
}