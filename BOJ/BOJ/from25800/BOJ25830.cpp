// https://www.acmicpc.net/problem/25830 2026-01-20 BOJ 25830 Microwave Mishap
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
  string s;
  cin >> s;

  istringstream iss(s);

  int i = 0;
  string buffer;
  int timeInputs[2];
  while (getline(iss, buffer, ':')) {
    timeInputs[i++] = stoi(buffer);
  }

  int time = timeInputs[0] * 3600 + timeInputs[1] * 60 - timeInputs[0] * 60  - timeInputs[1];

  int hours, minutes, seconds;
  hours = time / 3600;
  minutes = (time % 3600) / 60;
  seconds = time % 60;

  cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
}