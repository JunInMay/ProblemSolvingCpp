// https://www.acmicpc.net/problem/32728 2026-03-02 BOJ 32728 Sõnakuulelik Tom
#include <iostream>

using namespace std;

int main() {
    int n, capacity;
    string s;
    cin >> n >> capacity >> s;

    string boxA = "", boxB = "", boxC = "";
    string boxes[3] = {boxA, boxB, boxC};

    for (char c : s) {
        int idx = 0;
        if (c == 'r') idx = 1;
        else if (c == 'p') idx = 2;

        while (boxes[idx].length() >= capacity) {
            idx = (idx + 1) % 3;
        }
        boxes[idx] += c;
    }

    for (auto& e : boxes) {
        cout << e << '\n';
    }
}