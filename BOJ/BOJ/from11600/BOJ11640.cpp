// https://www.acmicpc.net/problem/11640 2024-10-14 BOJ 11640 Scaling Recipes
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int recipes;
  cin >> recipes;

  cout << fixed << setprecision(1);

  for (int i = 1; i <= recipes; i++) {
    double R, P, D;
    cin >> R >> P >> D;

    double portionRatio = D / P;

    vector<pair<string, double>> v;

    double mainWeight = -1;

    for (int j = 0; j < R; j++) {
      string name;
      double weight, percentage;
      cin >> name >> weight >> percentage;

      if (percentage == 100) mainWeight = weight * portionRatio;

      v.push_back(make_pair(name, percentage));
    }

    cout << "Recipe # " << i << '\n';

    for (auto& item : v) {
      cout << item.first << " " << mainWeight * (item.second / 100) << '\n';
    }

    cout << "----------------------------------------" << '\n';
  }
}