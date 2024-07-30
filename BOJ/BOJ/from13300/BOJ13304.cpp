// https://www.acmicpc.net/problem/13304 BOJ 13304 방 배정 2024-07-30
#include <iostream>

using namespace std;

// 0 : 1~2학년, 1 : 3~4 학년 여, 2 : 3~4 학년 남, 3 : 5~6학년 여, 4 : 5~6학년 남
int room[5];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  int n, k;
  cin >> n >> k;

  int result = 0;
  while (n-- > 0) {
    int gender, grade;
    cin >> gender >> grade;

    int idx = -1;
    if (grade <= 2) {
      idx = 0;
    } else if (grade <= 4) {
      idx = 1 + gender;
    } else if (grade <= 6) {
      idx = 3 + gender;
    }

    if (room[idx] == 0) result++;
    room[idx] += 1;
    if (room[idx] == k) room[idx] = 0;
  }

  cout << result;
}