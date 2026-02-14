// https://www.acmicpc.net/problem/7279 2026-02-014 BOJ 7279 Autobusas
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;

    int now = 0;
    int result = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        now += a - b;
        result = max(result, now - k);
    }

    cout << result;
}