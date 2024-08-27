// https://www.acmicpc.net/problem/20574 BOJ 20574 General Knight 2024-08-27
/*
나이트의 움직임은 총 8개가 가능. 8개의 움직임 중 유효한 움직임만 모아서 정렬하고 출력하면 됨.
a, b 입력으로 둘 중 하나가 0이 올 수 있음. 0이 하나라도 오게되면 움직이는 곳은 4방향 밖에 안되므로, 8방향 중 중복되는 움직임이 생김
중복을 해소하기 위해 a, b 둘 중 하나가 0일경우 4개의 움직임만 평가할 수도 있지만, 그냥 set을 썼음.
신기하게도 pair<int, int> 내부의 값까지 체크해서 중복을 해소해줬음. 그럼 내가 만든 사용자 정의 객체도 해주려는지는 모르겠다.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

char cols[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
int rows[8] = {1, 2, 3, 4, 5, 6, 7, 8};

int main() {
  int a, b;
  cin >> a >> b;

  string pos;
  cin >> pos;

  int col = pos[0] - 'a';
  int row = pos[1] - '1';

  vector<pair<int, int>> v {
    pair<int, int>(col - a, row - b),
    pair<int, int>(col - a, row + b),
    pair<int, int>(col + a, row - b),
    pair<int, int>(col + a, row + b),
    pair<int, int>(col - b, row - a),
    pair<int, int>(col - b, row + a),
    pair<int, int>(col + b, row - a),
    pair<int, int>(col + b, row + a)
  };

  set<pair<int, int>> available;
  for (auto& item : v) {
    int cIdx = item.first;
    int rIdx = item.second;

    if (cIdx < 0 || 8 <= cIdx || rIdx < 0 || 8 <= rIdx) continue;
    available.insert(item);
  }

  vector<pair<int, int>> answer = { available.begin(), available.end() };
  sort(answer.begin(), answer.end());
  
  cout << available.size() << '\n';
  for (auto& item : answer) cout << cols[item.first] << rows[item.second] << ' ';
}