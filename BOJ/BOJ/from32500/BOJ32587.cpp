// https://www.acmicpc.net/problem/32587 2025-02-18 BOJ 32587 Dragged-out Duel
#include <iostream>

using namespace std;

bool rsp(char me, char you) {
  bool result = false;

  if ((me == 'R' && you == 'S') || (me == 'S' && you == 'P') || (me == 'P' && you == 'R')) result = true;

  return result;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int n;
  cin >> n;

  string s1, s2;
  cin >> s1 >> s2;

  int win = 0;
  for (int i = 0; i < n; i++) {
    char me = s1[i];
    char you = s2[i];

    if (me == you) continue;

    if (rsp(me, you)) win++;
    else win--;
  }

  string result = "defeat";
  if (win > 0) result = "victory";

  cout << result;
}