// https://www.acmicpc.net/problem/4583 2024-11-14 BOJ 4583 거울상
#include <iostream>

using namespace std;

bool isSymmetry[100];
char symmetries[100];

int main() {
  string alphabets = "abcdefghijklmnopqrstuvwxyz";
  string symmetryKeys = "bdpqiovwx";
  string symmetryValues = "dbqpiovwx";

  for (char& c : alphabets) {
    symmetries[c - 'a'] = c;
  }

  for (int i = 0; i < symmetryKeys.size(); i++) {
    char c = symmetryKeys[i];
    char v = symmetryValues[i];

    isSymmetry[c - 'a'] = true;
    symmetries[c - 'a'] = v;
  }

  while (true) {
    string s;
    cin >> s;

    if (s.compare("#") == 0) break;

    bool distinguishable = true;
    for (char& c : s) {
      if (!isSymmetry[c - 'a']) {
        distinguishable = false;
        break;
      }
    }

    string result = "";
    if (!distinguishable) result = "INVALID";
    else {
      for (int i = 0; i < s.size(); i++) {
        char c = s[s.size() - 1 - i];

        result += symmetries[c - 'a'];
      }
    }

    cout << result << '\n';
  }
}