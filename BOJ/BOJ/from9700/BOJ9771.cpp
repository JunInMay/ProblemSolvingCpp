// https://www.acmicpc.net/problem/9771 2026-02-06 BOJ9771 Word Searching
#include <iostream>

using namespace std;

int main () {
    string target;
    cin >> target;

    string txt;
    int result = 0;
    while (cin >> txt) {
        if (txt.size() < target.size()) continue;

        int idx = 0;
        for (int i = 0; i < txt.size(); i++) {
            if (target[idx] == txt[i]) {
                idx++;
            }

            if (idx == target.size()) {
                result++;
                idx = 0;
            }
        }
    }

    cout << result;
}