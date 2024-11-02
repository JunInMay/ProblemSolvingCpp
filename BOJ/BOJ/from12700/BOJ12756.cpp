// https://www.acmicpc.net/problem/12756 2024-11-02 BOJ 12756 고급 여관
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double aa, al, ba, bl;
    cin >> aa >> al >> ba >> bl;
    
    string result = "DRAW";
    int aHit = ceil((double) al / ba);
    int bHit = ceil((double) bl / aa);
    
    if (bHit > aHit) result = "PLAYER B";
    else if (bHit < aHit) result = "PLAYER A";
        
    cout << result;
}