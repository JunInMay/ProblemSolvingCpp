// https://www.acmicpc.net/problem/3512 2025-08-13 BOJ 3512 Flat
#include <iostream>

using namespace std;

int main() {
  int n, price;
  cin >> n >> price;

  int roomExtent = 0;
  int bedroomFlat = 0;
  double cost = 0;
    
  while(n-- > 0) {
    int flat;
    string room;
    cin >> flat >> room;

    double flatPrice = flat * price;

    if (room.compare("bedroom") == 0) bedroomFlat += flat;
    roomExtent += flat;

    if (room.compare("balcony") == 0) flatPrice /= 2;

    cost += flatPrice;
  }

  cout << roomExtent << '\n';
  cout << bedroomFlat << '\n';
  cout << fixed << cost << '\n';
}
