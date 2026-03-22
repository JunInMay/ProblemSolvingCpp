// https://www.acmicpc.net/problem/9377 2026-03-22 BOJ 9377 String LD
#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n;

    vector <string> v;
    while (true) {
        cin >> n;
        if (n == 0) break;

        v = vector<string>(n);
        for (int i = 0; i < n ; i++) {
            cin >> v[i];
        }

        int idx = 0;
        while (true) {
            bool same = false;

            for (auto e : v) {
                if (e.empty()) {
                    same = true;
                    break;
                }
            }

            for (int i = 0; i < n; i++) {
                if (same) break;

                for (int j = i + 1; j < n; j++) {
                    if (i == j) continue;

                    if (v[i] == v[j]) {
                        same = true;
                        break;
                    }
                }
            }

            if (same) {
                break;
            }

            for (auto & i : v) {
                i = i.substr(1);
            }
            idx++;
        }
        cout << idx - 1 << '\n';
    }
}

/*
2
abb
cbb
0

*/

/*
4
aaba
aaca
baabcd
dcba
3
aaa
bbbb
ccccc
0
 */