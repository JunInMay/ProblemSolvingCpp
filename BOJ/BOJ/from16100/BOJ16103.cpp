// https://www.acmicpc.net/problem/16103 2026-03-26 BOJ 16103 Drawn and Quartered
#include <iostream>

using namespace std;

void switcheroo(int n, string& s) {
    for (int i = 0; i < n / 4; i++) {
        int idx = i + n / 4;
        int tIdx = i + (n / 4) * 3;
        swap(s[idx], s[tIdx]);
    }

    for (int i = 0; i < n / 4; i++) {
        int idx = i + (n / 4) * 2;
        int tIdx = i + (n / 4) * 3;
        swap(s[idx], s[tIdx]);
    }
}

int main () {
    int n;
    long long k;
    string s;
    cin >> n >> k >> s;
    k %= 3;

    for (int i = 0; i < k; i++) {
        switcheroo(n, s);
    }

    cout << s;
}
/*
20 1
southpacificregional
20 2
southpacificregional
20 3
southpacificregional

*/