// https://www.acmicpc.net/problem/5155 2026-02-25 BOJ 5155 Gadget Purchases
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Machine {
    int p, c, u, r, needed;
};

int main() {
    int tc;
    cin >> tc;

    int caseNumber = 1;
    while (tc-- > 0) {
        int n, m;
        cin >> n >> m;

        vector<Machine> v{};
        for (int i = 0; i < m; i++) {
            Machine x{};
            cin >> x.p >> x.c >> x.u >> x.r;

            v.push_back(x);
        }

        for (int i = 0; i < n; i++) {
            int input;
            cin >> input;

            v[input-1].needed++;
        }

        cout << "Data Set " << caseNumber++ << ":\n";
        for (int i = 0; i < m; i++) {
            Machine x = v[i];
            x.needed = min(x.u, x.needed);
            int profit = x.r * x.needed - (x.p + x.c * x.needed);

            if (profit > 0) cout << i + 1 << '\n';
        }
        cout << '\n';
    }
}