// https://www.acmicpc.net/problem/1260 2024-11-12 BOJ 1260 DFS와 BFS

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <stack>
#include <deque>

using namespace std;
  
// 방문 여부 확인용 변수. false 로 초기화됨. 그냥 넉넉잡아 2000개 잡았음
bool visited[2000];

int main() {
  // C++ 에서 입력 빠르게 받기 위한 것
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  // 입력받기
  int n, m, v;
  cin >> n >> m >> v;

  // 그래프 그리기용(인접리스트)
  map<int, vector<int>> graph;

  // 그래프 입력 받기
  for (int i = 0; i < m; i++) {
    int from, to;
    cin >> from >> to;

    // 양방향 그래프이므로 두 노드 서로 연결해줘야 함.
    if (graph.find(from) == graph.end()) graph[from] = {};

    if (graph.find(to) == graph.end()) graph[to] = {};

    graph[from].push_back(to);
    graph[to].push_back(from);
  }

  // 노드가 여러개일 경우 숫자가 낮은 것부터 방문하라고 했으므로 오름차순 정렬
  for (auto& node : graph) {
    sort(node.second.begin(), node.second.end());
  }

  // dfs 먼저 진행
  /*
  dfs를 재귀가 아닌, stack 자료구조를 활용하여 수행할 것임(최성락 요청)
  이 때 필요한 것은 dfs의 특징, 한 곳만 죽어라 파고, 아무것도 안나오면 다시 올라가야 하므로, "다시 올라갈 곳" 을 알고 있어야 함
  그 정보를 스택에 저장할 것임. 따라서 프로세스는 다음과 같다.

  <기본 개념>
  1. 노드를 스택에 쌓는다.
  2. 스택에 쌓였다는 것 자체가 방문했다는 의미이므로 화면에 출력한다.
  3. 노드에 연결된 간선이 없거나, 간선을 모두 방문했다면 스택에서 빼낸다.
  
  <반복문>
  1. 스택의 맨 위 노드를 확인한다.
  2. 해당 노드와 연결된 간선을 순회한다. 오름차순으로 순회하게 될 것이다.
  3-1. 아직 방문하지 않은 간선이 있다면 스택에 넣고 break.
  3-2. 모든 간선을 방문했거나 연결된 간선이 없다면 다시 이전 레벨의 노드를 탐색해야 하므로 스택에서 pop
  4. 다시 스택의 맨 위 노드를 확인한다.
  */

  // dfs 초기화, v 노드 부터 시작한다.
  stack<int> st;
  st.push(v);

  // 방문 시에 출력한다.
  cout << v << " ";
  visited[v] = true;

  // 스택이 모두 털리면 끝.
  while (!st.empty()) {
    // 일단 스택 최상단 노드를 확인해본다.
    int node = st.top();

    // found : 방문할 간선이 있었는지 여부를 따짐. 간선이 없으면 스택에서 빠져야 함.
    bool found = false;

    // 연결된 간선 순회
    for (auto& target : graph[node]) {
      // 방문하지 않은 노드를 찾은 경우 스택에 넣고 break 한다. 물론 다른 간선이 있을 수 있다. 근데 그건 나중에 순회해야 하므로 break 하는 것이다.
      if (!visited[target]) {
        // 일단 스택에 넣는다.
        st.push(target);

        // 스택에 넣었으니 출력해야겠지? 위에서 "넣을 때 출력" 한다고 했으니까.
        cout << target << " ";

        // 방문처리
        visited[target] = true;
        found = true;
        break;
      }
    }

    // 방문할 간선이 없었으므로 스택에서 빠짐.
    if (!found) st.pop();
  }
  cout << '\n';

  /*
  아래 내용은 bfs라 이미 알고있다면 안 봐도 됨
  */
  // bfs 도 해야하므로 bfs 초기화
  fill(visited, visited+2000, false);

  // bfs용 큐(난 덱 사용했음 덱이 편함)
  deque<int> dq;
  dq.push_back(v);
  // bfs 덱으로 돌릴 땐 pop 할 때 출력할거다.
  visited[v] = true;

  while (!dq.empty()) {
    int node = dq.front();
    dq.pop_front();

    cout << node << " ";

    for (auto& target : graph[node]) {
      if (!visited[target]) {
        dq.push_back(target);
        visited[target] = true;
      }
    }
  }
}