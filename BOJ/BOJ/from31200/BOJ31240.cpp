// https://www.acmicpc.net/problem/31243 BOJ 31243 ВРЕМЕ 2024-08-14
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int minDriving = 60 * 1000;
  int maxDriving = -1;

  for (int i = 0; i < 3; i++) {
    int dh, dm, ah, am;
    cin >> dh >> dm >> ah >> am;

    int department = dh * 60 + dm;
    int arrival = ah * 60 + am;
    if (arrival < department) arrival += 24 * 60;

    int driving = arrival - department;
    minDriving = min(minDriving, driving);
    maxDriving = max(maxDriving, driving);
  }

  string minString = "";
  string maxString = minString;

  string minMinutes = to_string(minDriving % 60);
  if (minDriving % 60 < 10) minMinutes = "0" + minMinutes;
  minString = to_string(minDriving / 60) + ':' + minMinutes;
  
  string maxMinutes = to_string(maxDriving % 60);
  if (maxDriving % 60 < 10) maxMinutes = "0" + maxMinutes;
  maxString = to_string(maxDriving / 60) + ':' + maxMinutes;

  cout << minString << '\n';
  cout << maxString;
}

/*
git config --global user.email "twszak01@gmail.com"
git config --global user.name "Chana in Mamas Laptop"
*/