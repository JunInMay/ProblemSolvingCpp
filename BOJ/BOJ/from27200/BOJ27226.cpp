// https://www.acmicpc.net/problem/27226 2026-+03-08 BOJ 27226 Лестница из чисел
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    long long a, b, k;
    cin >> a >> b >> k;

    int n = 1;
    for (long long i = a; i <= b; i++) {
        long long start = ((i - 1) * i) / 2 + 1;

        for (long long j = 0; j < min(k, i); j++) {
            cout << start + j << ' ';
        }
        cout << '\n';
    }
}