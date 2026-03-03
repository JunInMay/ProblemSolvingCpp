// https://www.acmicpc.net/problem/35071 2026-03-03 BOJ 35071 Circular Shortcut
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long double d;
    cin >> d;

    long double pi = M_PI;
    cout << fixed << setprecision(10);
    cout << pi * d / 2 - d << '\n';

}