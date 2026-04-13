// https://www.acmicpc.net/problem/24577 2026-04-13 BOJ 24577 Espresso!
#include <iostream>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    int remaining = s;
    int result = 0;
    while (n-- > 0) {
        string order;
        cin >> order;

        int water = order[0] - '0';
        if (order.length() > 1) water++;

        if (remaining >= water) remaining -= water;
        else {
            remaining = s;
            remaining -= water;
            result++;
        }
    }

    cout << result;
}