// https://www.acmicpc.net/problem/11296 2026-02-24 BOJ 11296 가격
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int tc;
    cin >> tc;

    cout << fixed << setprecision(2);

    while (tc-- > 0) {
        double price;
        char d, c, p;
        cin >> price >> d >> c >> p;

        switch (d) {
            case 'R': price *= (1 - 0.45); break;
            case 'G': price *= (1 - 0.30); break;
            case 'B': price *= (1 - 0.20); break;
            case 'Y': price *= (1 - 0.15); break;
            case 'O': price *= (1 - 0.10); break;
            case 'W': price *= (1 - 0.05); break;
            default: break;
        }

        if (c == 'C') price *= (1 - 0.05);

        if (p == 'P') {
            price = round(price * 100) / 100;
        } else {
            if (int(price * 100) % 10 <= 5) {
                price = (price * 100 - int(price * 100) % 10) / 100;
            }
            price = round(price * 10) / 10;
        }

        cout << '$' << price << '\n';
    }
}