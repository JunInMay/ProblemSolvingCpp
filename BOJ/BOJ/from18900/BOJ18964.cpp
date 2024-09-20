// https://www.acmicpc.net/problem/18964 BOJ 18964 Questionnaire 2024-09-20
/*
나는 홀짝으로만 풀었는데, 다른 풀이를 보니 찬성을 늘리려면 n=1 k = 0 하면 모든 자연수에 해당하므로 전부 찬성이다.
어쨌든 찬성과 반대의 수가 똑같아도 풀리므로, 모든 수를 최소 1:1로 분류할 수 있는 홀짝 기준으로도 풀리긴 한다.
*/
#include <iostream>

using namespace std;

int main() {
  int tc;
  cin >> tc;

  int odd = tc;
  int even = 0;
  for (int i = 0; i < tc; i++) {
    int number;
    cin >> number;

    if (number % 2 == 0) even++;
  }
  odd = tc - even;

  int n = 2;
  int k = 1;
  if (even > odd) k = 0;

  cout << n << " " << k;
}