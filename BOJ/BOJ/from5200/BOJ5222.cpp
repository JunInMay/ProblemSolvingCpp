// https://www.acmicpc.net/problem/5222 2026-02-07 BOJ 5222 Vigenère Cipher
#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    while (n-- > 0) {
        string key, txt;
        cin >> key >> txt;

        int ki = 0;
        cout << "Ciphertext: ";

        for (char c : txt) {
            cout << (char)(((c - 'A') + (key[ki++] - 'A')) % 26 + 'A');
            ki %= key.size();
        }

        cout << '\n';
    }
}