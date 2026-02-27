// https://www.acmicpc.net/problem/15180 2026-02-27 BOJ 15180 Fitness
#include <iostream>

using namespace std;

bool visited[10];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int now;
    cin >> now;

    visited[now] = true;

    cout << now << ' ';

    string result = "";
    int visitCount = 1;
    while (true) {
        string s;
        cin >> s;

        if (s.compare("#") == 0) break;

        int direction = s[0] == 'A' ? -1 : 1;
        int step = int(s[1] - '0');

        now = ((now - 1) + step * direction + 8) % 8 + 1;

        if (visited[now]) result = "reject";

        visited[now] = true;
        visitCount++;

        cout << now << ' ';
    }

    if (visitCount < 5) result = "reject";
    cout << result;
}