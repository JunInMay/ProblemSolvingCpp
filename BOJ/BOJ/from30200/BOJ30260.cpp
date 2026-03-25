// https://www.acmicpc.net/problem/30260 2026-03-25 BOJ 30260 Finding Your Roots
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tcc;
    cin >> tcc;

    for (int tc = 1; tc <= tcc; tc++) {
        int target, count;
        cin >> target >> count;

        vector<int> v(count);
        for (int i = 0; i < count; i++) {
            cin >> v[i];
        }

        int result = 0;
        while (target != 0) {
            target = v[target - 1];
            result++;
        }

        cout << "Data Set " << tc << ":\n";
        cout << result << "\n\n";
    }
}