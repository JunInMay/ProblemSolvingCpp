// https://www.acmicpc.net/problem/21355 2026-02-22 BOJ 21355 Personnummer
#include <iostream>
#include <deque>

using namespace std;

int main() {
    string s;
    cin >> s;

    deque<char> dq();

    int offset = 0;
    int years = ((s[0] - '0') * 10) + (s[1] - '0');
    bool old = false;

    if (s.find('+') != string::npos) {
        old = true;
    }

    int header = 20;
    if (years < 20) {
        if (old) {
            header = 19;
        }
    } else {
        header = 19;
        if (old) {
            header = 18;
        }
    }

    cout << header;
    for (char c : s) {
        if (c != '-' && c != '+') {
            cout << c;
        }
    }
}