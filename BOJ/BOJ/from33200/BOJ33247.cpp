// https://www.acmicpc.net/problem/33247 2026-03-07 BOJ 33247 Alternative Blockchain Algorithms
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    long long balance = 0;
    long long before = 0;
    bool isValid = true;
    bool isNoMoney = false;
    for (int i = 0; i < n; i++) {
        int index, parent, value;
        cin >> index >> parent >> value;

        if (parent != before) {
            isValid = false;
        }

        balance += value;
        before = index;

        if (balance < 0) {
            isNoMoney = true;
        }
    }

    if (!isValid) {
        cout << "INVALID";
    } else if (isNoMoney) {
        cout << "NO_MONEY";
    } else {
        cout << balance;
    }
}