// https://www.acmicpc.net/problem/6260 2024-12-29 BOJ 6260 Encrypted SMS
#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<char, int> indexes = {
  {'a', 2}, {'b', 2}, {'c', 2},
  {'d', 3}, {'e', 3}, {'f', 3},
  {'g', 4}, {'h', 4}, {'i', 4},
  {'j', 5}, {'k', 5}, {'l', 5},
  {'m', 6}, {'n', 6}, {'o', 6},
  {'p', 7}, {'q', 7}, {'r', 7}, {'s', 7},
  {'t', 8}, {'u', 8}, {'v', 8},
  {'w', 9}, {'x', 9}, {'y', 9}, {'z', 9},
};

vector<string> chars = {
  "abc",
  "def",
  "ghi",
  "jkl",
  "mno",
  "pqrs",
  "tuv",
  "wxyz",
};

int main() {
  while (true){
    string s;
    cin >> s;

    if (s.compare("#") == 0) break;

    for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      bool isUpper = false;
      if (c <= 'Z') {
        c = c - 'A' + 'a';
        isUpper = true;
      }
      int index = indexes[c] - 2;

      string button = chars[index];
      int size = (int)button.size();
      int current = button.find(c);

      int nextIdx = (((current - (i + 1)) % size) + size) % size;

      char decrypted = button[nextIdx];
      if (isUpper) decrypted = decrypted - 'a' + 'A';
      cout << decrypted;
    }

    cout << '\n';
  }
}