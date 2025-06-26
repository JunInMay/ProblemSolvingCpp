// https://www.acmicpc.net/problem/34027 2025-06-26 BOJ 34027 제곱 수?
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        double dd;
        cin >> dd;
        
        int result = 1;
        if (sqrt(dd) != (int)(sqrt(dd))) result = 0;
        
        cout << result << '\n';
    }
}

/*
10
1
2
3
4
5
6
7
8
9
10

*/