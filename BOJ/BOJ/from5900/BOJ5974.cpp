// https://www.acmicpc.net/problem/5974 2026-04-09 BOJ 5974 Lucky Charms
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int l, c, n;
    cin >> l >> c >> n;

    while (c-- > 0 ) {
        int length, pos;
        cin >> length >> pos;

        cout << abs(pos - n) + length << '\n';
    }
}