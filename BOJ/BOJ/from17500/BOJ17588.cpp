// https://www.acmicpc.net/problem/17588 2025-09-11 BOJ 17588 Missing Numbers
#include <iostream>
#include <cmath>

using namespace std;

bool called[2000];

int main() {
  int n;
  cin >> n;

  int maxN = -1;
  while(n-- > 0) {
    int nn;
    cin >> nn;

    called[nn] = true;
    maxN = max(maxN, nn);
  }

  bool isCorrect = true;
  for (int i = 1; i <= maxN; i++) {
    if (!called[i]) {
      cout << i << '\n';
      isCorrect = false;
    }
  }

  if (isCorrect) cout << "good job";
}