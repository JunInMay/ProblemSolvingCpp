// https://www.acmicpc.net/problem/4884 2025-02-06 BOJ 4884 FIFA 월드컵
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  while(true) {
    long long g, t, a, d;
    cin >> g >> t >> a >> d;

    if (g == -1) break;

    long long matchPerGroup = (1 + t - 1) * (t - 1) / 2;
    long long matchBeforeTournament = matchPerGroup * g;

    long long tournamentTeams = a * g + d;

    double exponent = log2(tournamentTeams);

    if (exponent != int(exponent)) {
      exponent = int(exponent) + 1;
    }
    long long desirableTeams = pow(2, exponent);

    long long matches = matchBeforeTournament + pow(2, exponent) - 1;
    long long additionalTeams = desirableTeams - tournamentTeams;
    
    cout << g << "*" << a << "/" << t << "+" << d << "=" << matches << "+" << additionalTeams << '\n';
  }
}