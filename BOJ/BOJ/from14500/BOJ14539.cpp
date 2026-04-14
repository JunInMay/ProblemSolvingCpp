// https://www.acmicpc.net/problem/14539 2026-04-14 BOJ 14539 Grid Pattern
#include <iostream>

using namespace std;

void printLine(int type, int col, int w) {
    string result = "";
    char separator = '|';
    char inner = '*';

    if (type == 1) {
        separator = '+';
        inner = '-';
    }

    result += separator;
    for (int i = 0; i < col + col * w; i++) {
        if (i % (w + 1) == w) {
            result += separator;
        } else {
            result += inner;
        }
    }

    cout << result << '\n';
}

int main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        int row, col, w, h;
        cin >> row >> col >> w >> h;

        cout << "Case #" << i << ":\n";
        printLine(1, col, w);
        for (int j = 0; j < row + row * h; j++) {
            if (j % (h + 1) == h) {
                printLine(1, col, w);
            } else {
                printLine(0, col, w);
            }
        }
    }
}