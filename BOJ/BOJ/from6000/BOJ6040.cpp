// https://www.acmicpc.net/problem/6040 2026-04-02 BOJ 6040 Hexadecimal Conversion
#include <iostream>
#include <cmath>

using namespace std;

bool digits[400001];

int main() {
    string s;
    cin >> s;

    int idx = 0;
    int size = s.length();
    for (char c : s) {
        int number;
        if ('0' <= c && c <= '9') {
            number = c - '0';
        } else {
            number = c - 'A' + 10;
        }

        for (int i = 0; i < 4; i++) {
            int divisor = pow(2, 3 - i);
            if (number / divisor) {
                digits[idx * 4 + i] = 1;
            }
            number = number % divisor;
        }

        idx++;
    }

    int t = 0;
    int number = 0;
    string result = "";
    for (int i = size * 4 - 1; i >= 0; i--) {
        if (t == 3) {
            t = 0;
            result += number + '0';
            number = 0;
        }
        number = number + digits[i] * pow(2, t);
        t++;

        if (i == 0 && number != 0) {
            result += number + '0';
        }
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[result.size() - i - 1];
    }
}