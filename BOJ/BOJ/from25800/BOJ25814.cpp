// https://www.acmicpc.net/problem/25814 2025-12-09 BOJ 25814 Heavy Numbers
#include <iostream>

using namespace std;

int getWeight(int a) {
  int weight = 0;

  int length = 0;
  int sum = 0;
  while(a > 0) {
    int d = a % 10;
    a /= 10;
    
    sum += d;
    length++;
  }

  weight = length * sum;
  return weight;
}

int main() {
  int a, b;
  cin >> a >> b;

  int result = 0;

  if (getWeight(a) < getWeight(b)) {
    result = 2;
  } else if (getWeight(a) > getWeight(b)) {
    result = 1;
  }
  
  cout << result;
}