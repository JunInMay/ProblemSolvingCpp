// https://www.acmicpc.net/problem/17850 2025-12-07 BOJ 17850 Make America Grade Again
#include <iostream>
#include <sstream>

using namespace std;

bool equal(string s, string t) {
  if (s.compare(t) == 0) return true;
  return false;
}

string splitIndex(string s, char splitter, int i) {
  istringstream iss(s);
  string buffer;

  int idx = 0;
  while(getline(iss, buffer, splitter)) {
    if (idx++ == i) return buffer;
  }
}

int numerators[4];
int denominators[4];

int main() {
  int l, h, p, e, n;
  cin >> l >> h >> p >> e >> n;
  
  double portions[4] = {l, h, p, e};

  while(n-- > 0) {
    string key, nn, points;
    cin >> key >> nn >> points;

    int idx = 0;
    if (equal(key, "Lab")) {
      idx = 0;
    } else if (equal(key, "Hw")) {
      idx = 1;
    } else if (equal(key, "Proj")) {
      idx = 2;
    } else if (equal(key, "Exam")) {
      idx = 3;
    }

    int numerator = stoi(splitIndex(points, '/', 0));
    int denominator = stoi(splitIndex(points, '/', 1));
    numerators[idx] += numerator;
    denominators[idx] += denominator;
  }

  double result = 0;
  for (int i = 0; i < 4; i++) {
    result += portions[i] * ((double)numerators[i] / denominators[i]);
  }

  cout << (int)result;
}

/*
20 20 25 35 10
Lab 1: 15/20
Hw 1: 65/70
Hw 2: 27/35
Exam 1: 88/100
Proj 1: 50/50
Hw 3: 61/65
Exam 2: 79/100
Lab 2: 17/20
Hw 4: 51/60
Exam 3: 141/150
*/