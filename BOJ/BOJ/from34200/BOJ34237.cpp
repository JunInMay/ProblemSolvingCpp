// https://www.acmicpc.net/submit/34237 2026-02-04 BOJ 34237 호참전
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    while (m-- > 0) {
        int g, x, y;
        cin >> g >> x >> y;

        int result = 0;
        for (auto e : v) {
            int tiger = e.first;
            int bird = e.second;
            int left = g - (x + y);

            if (tiger >= x && bird >= y
                && abs(tiger - x) + abs(bird - y) <= left) {
                result++;
            }
        }

        cout << result << '\n';
    }
}