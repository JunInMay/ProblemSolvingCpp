// https://www.acmicpc.net/problem/7366 2026-03-01 BOJ 7366 Counting Sheep
#include <iostream>

using namespace std;

int main() {
    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        int n;
        cin >> n;

        int result = 0;
        while (n-- > 0) {
            string s;
            cin >> s;

            if (s.compare("sheep") == 0) result++;
        }

        cout << "Case " << i << ": This list contains " << result << " sheep.\n\n";
    }
}