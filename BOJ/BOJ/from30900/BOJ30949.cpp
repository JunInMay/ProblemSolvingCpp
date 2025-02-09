// https://www.acmicpc.net/problem/30949 2025-02-07 Equal Schedules
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

set<string> names;
map<string, int> fromMap;
map<string, int> toMap;

void getInput(map<string, int>& target) {
  string input;
  while(true) {
    getline(cin, input);
    if (input.compare("------") == 0 || input.compare("======") == 0) break;

    string buffer;
    istringstream iss(input);

    getline(iss, buffer, ' ');
    int from = stoi(buffer);
    getline(iss, buffer, ' ');
    int to = stoi(buffer);
    getline(iss, buffer, ' ');
    string name = buffer;

    names.insert(name);
    
    if (target.find(name) == target.end()) {
      target.insert({name, 0});
    }

    target[name] += (to - from);
  }
}

int main() {
  getInput(fromMap);
  getInput(toMap);

  for (auto& name : names) {
    if (fromMap.find(name) == fromMap.end()) fromMap.insert({name, 0});
    if (toMap.find(name) == toMap.end()) toMap.insert({name, 0});
  }

  vector<pair<string, int>> fromVector(fromMap.begin(), fromMap.end());
  vector<pair<string, int>> toVector(toMap.begin(), toMap.end());

  sort(fromVector.begin(), fromVector.end(), [](auto& left, auto& right) {
    return left.first < right.first;
  });
  sort(toVector.begin(), toVector.end(), [](auto& left, auto& right) {
    return left.first < right.first;
  });

  int difference = 0;
  for (int i = 0; i < names.size(); i++) {
    string name = fromVector[i].first;
    if (fromVector[i].second != toVector[i].second) {
      difference++;
      int diff = toVector[i].second - fromVector[i].second;
      char sign = diff < 0 ? '-' : '+';
      cout << name << " " << sign << abs(diff) << '\n';
    }
  }

  if (!difference) cout << "No differences found.";
}

/*
0 7 jan
7 14 tomaz
14 20 jure
20 24 jan
24 25 tomaz
25 26 pi
------
0 9 tomaz
9 20 jan
20 26 asdf
======


*/