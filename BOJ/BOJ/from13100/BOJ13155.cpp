// https://www.acmicpc.net/problem/13155 2024-10-29 BOJ 13155 Common Knowledge
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long bob = pow(4, n);
  long long alice = pow(2, n);

  cout << bob * alice;
}

/*
위만 보고도 인식 가능한 수 : 7, 4, 1, 0

아래만 보고도 인식 가능한 수 : 4, 2, 0
*/