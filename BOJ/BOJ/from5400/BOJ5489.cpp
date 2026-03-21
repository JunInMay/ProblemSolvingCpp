// https://www.acmicpc.net/problem/5489 2026-03-21 BOJ 5489
#include <iostream>

using namespace std;

int frequency[20000];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n;
    cin >> n;

    int maxFrequency = -1;
    while (n--> 0) {
        int nn;
        cin >> nn;

        frequency[nn]++;
        maxFrequency = max(maxFrequency, frequency[nn]);
    }

    for (int i = 0; i < 10001; i++) {
        if (frequency[i] == maxFrequency) {
            cout << i;
            break;
        }
    }
}