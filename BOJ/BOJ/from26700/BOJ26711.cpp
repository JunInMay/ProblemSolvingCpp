// https://www.acmicpc.net/problem/26711 BOJ 26711 A+B
#include <iostream>
#include <cmath>

using namespace std;

int result[5010];

int main() {
    string A, B;
    cin >> A >> B;
    int aLen = A.length(), bLen = B.length();
    int maxLen = max(aLen, bLen);

    int c = 0;
    int i;
    for (i = 0; i < maxLen; i++) {
        int ai = aLen - i - 1, bi = bLen - i - 1;

        int a = 0, b = 0;

        if (ai >= 0) {
            a = A[ai] - '0';
        }
        if (bi >= 0) {
            b = B[bi] - '0';
        }

        result[i] = (a + b + c) % 10;
        c = (a + b + c) / 10;
    }
    result[i] = c;

    bool start = 0;
    for (int j = 5001; j >= 0; j--) {
        if (!start && !result[j]) continue;
        if (!start && result[j]) start = 1;
        cout << result[j];
    }
}