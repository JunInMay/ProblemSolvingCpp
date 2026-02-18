// https://www.acmicpc.net/problem/33538 2026-02-18 BOJ 33538 Crawling
#include <iostream>

using namespace std;

int main() {
    int l, n;
    cin  >> l >> n;

    long double goal;
    cin >> goal;

    string result = "DOOMED";
    while (n-- > 0) {
        long double front, back;
        cin >> front >> back;

        long double t = l / front + l / back;
        if (t < goal) result = "HOPE";
    }

    cout << result;
}

/*

2
2
4.0
0.42 0.21
0.24 0.332

*/