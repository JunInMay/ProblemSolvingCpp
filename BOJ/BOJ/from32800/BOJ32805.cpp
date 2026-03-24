// https://www.acmicpc.net/problem/32805 2026-03-24 BOJ 32805 A Stack of Gold
#include <iostream>

using namespace std;

int tungsten = 29260;
int gold = 29370;

int main() {
    int w, s;
    cin >> w >> s;

    int original = (tungsten * s + tungsten) * s / 2;
    int diff = w - original;

    cout << diff / (gold - tungsten);
}