// https://www.acmicpc.net/problem/21022 2026-02-08 BOJ 21022 Three Points for a Win
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m[n * 2];

    for (int i = 0; i < n * 2; i++) {
        cin >> m[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        int a = m[i];
        int b = m[i + n];

        if (a > b) result += 3;
        else if (a == b) result += 1;
    }

    cout << result;
}