#include <iostream>

using namespace std;

int main() {
  while (true) {
    string s;
    cin >> s;

    if (s == "#") break;

    char before = -1;
    bool isBeautiful = true;
    for (char c : s) {
      if (before != -1) {
        int candidates[3];
        for (int i = 0; i < 3; i++) candidates[i] = ((before - 'A') + (i * 2 + 2)) % 7;

        bool correctSequence = false;
        for (int letter : candidates) {
          if (c - 'A' == letter) correctSequence = true;
        }

        if (!correctSequence) isBeautiful = false;
      }
      before = c;
    }

    string result = "That music is beautiful.";
    if (!isBeautiful) result = "Ouch! That hurts my ears.";

    cout << result << '\n';
  }
}