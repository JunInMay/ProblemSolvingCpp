// https://www.acmicpc.net/problem/15683 BOJ 15683 감시 2024-01-23
/*
DFS 문제.
카메라마다 시야의 방향이 다르기 때문에 각 방향을 다 설정해줘야 해서 구현이 껄끄럽다.
나는 up, down, left, right 와 같이 시야를 체크하는 함수를 만들고
각 카메라 1~5 종류 마다 회전 케이스가 다르고, 회전 케이스마다 보는 시야가 다르므로
그것을 2차원 함수 포인터 배열로 관리했다.
3차원 함수 포인터 배열로 관리하는게 이상적이라고 생각하긴 했다.
왜냐면 if camera == 1 , camera == 2 와 같은 분기를 없애고
dCamera[camera][i][j] 와 같은 형식으로 함수를 불러올 수 있게 되기 때문이다.

생각의 흐름 1. 
그러나 각 카메라마다 회전 횟수가 4개, 2개로 다르고, 또 각 회전마다 사용할 시야함수의 개수가 다르다.
개수가 일정하지 않아서 일정한 배열에 담기가 어려웠다. 억지로 담을 순 있었는데, 함수를 중복 호출하게 될 것이다.
이를테면 dCamera[5][4][4] 로 선언하면 되긴 하는데, 이러면 
카메라 1번은 dCamera[0][0][3].. 이런 식으로 불필요하게 시야함수를 16회 호출한다. 
카메라 1번은 사실 dCamera[0][0][0], dCamera[0][1][0], dCamera[0][2][0], dCamera[0][3][0]
로 4번만 확인하면 되는데 말이다. 즉 가라 값을 넣어야 되게 된다. 근데 그래도 될 것 같기도 하고.

생각의 흐름 2.
가라함수를 만들어서 3차원 배열의 빈 값을 채우자~! 는 생각을 했다.

생각의 흐름 3.
어차피 전역에 선언된 배열은 null 값이 자동으로 들어가지않나? 그냥 nullptr 체크를 하자.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int board[8][8];
int N, M;
int result;

/*
CCTV 시야 함수 정의 (상하좌우)
*/
// 벽(6)에 걸리지 않는다면 7(시야)로 체크한다.
void up(int y, int x, int board[][8]) {
	//cout << " up ! \n";
	for (int i = y; i >= 0; i--) {
		if (board[i][x] == 6) break;
		if (board[i][x] == 0) board[i][x] = 7;
	}
}

void down(int y, int x, int board[][8]) {
	//cout << " down ! \n";
	for (int i = y; i < N; i++) {
		if (board[i][x] == 6) break;
		if (board[i][x] == 0) board[i][x] = 7;
	}
}

void left(int y, int x, int board[][8]) {
	//cout << " left ! \n";
	for (int i = x; i >= 0; i--) {
		if (board[y][i] == 6) break;
		if (board[y][i] == 0) board[y][i] = 7;
	}
}

void right(int y, int x, int board[][8]) {
	//cout << " right ! \n";
	for (int i = x; i < M; i++) {
		if (board[y][i] == 6) break;
		if (board[y][i] == 0) board[y][i] = 7;
	}
}

// 가라함수
void gara(int y, int x, int board[][8]) { }

// [카메라별 회전 가능한 결과][회전했을 때 계산되는 CCTV 시야함수의 개수]
int dSizes[5][2] = {
	{4, 1}, {2, 2}, {4, 2}, {4, 3}, {1, 4}
};

/*
생각의 흐름 2.
ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
이게 맞는지 모르겠다.
일단 가라함수를 통해 정의했는데, 그냥 크기를 주면 어차피 전역에선 null값이 들어가지 않나?
*/
//void (*dAll[5][4][4])(int, int, int[][8]) = {
//	{
//		{left, gara, gara, gara},
//		{right, gara, gara, gara},
//		{up, gara, gara, gara},
//		{down, gara, gara, gara}
//	},
//	{
//		{up, down, gara, gara},
//		{left, right, gara, gara},
//		{gara, gara, gara, gara},
//		{gara, gara, gara, gara}
//	},
//	{
//		{up, right, gara, gara},
//		{right, down, gara, gara},
//		{down, left, gara, gara},
//		{left, up, gara, gara}
//	},
//	{
//		{left, up, right, gara},
//		{up, right, down, gara},
//		{right, down, left, gara},
//		{down, left, up, gara}
//	},
//	{
//		{left, up, right, down},
//		{gara, gara, gara, gara},
//		{gara, gara, gara, gara},
//		{gara, gara, gara, gara}
//	}
//};

/*
생각의 흐름 3.
어차피 전역으로 선언하면 nullptr 아닌가? 그냥 선언하고 nullptr 체크하면되잖아?
*/
void (*dAll[5][4][4])(int, int, int[][8]) = {
	// 1번 카메라
	{
		{left},
		{right},
		{up},
		{down}
	},
	// 2번 카메라
	{
		{up, down},
		{left, right}
	},
	// 3번 카메라
	{
		{up, right},
		{right, down},
		{down, left},
		{left, up}
	},
	//4 번 카메라
	{
		{left, up, right},
		{up, right, down},
		{right, down, left},
		{down, left, up}
	},
	//5번 카메라
	{
		{left, up, right, down}
	}
};

/*
생각의 흐름 1.
*/
// 카메라 1의 회전은 4방향. 상하좌우.
void (*d1[4][1])(int, int, int[][8]) = {
	{left}, {right}, {up}, {down}
};

// 카메라 2의 회전은 2방향. 각 방향마다 상하, 좌우로 2개 방향씩 시야를 계산함.
void (*d2[2][2])(int, int, int[][8]) = {
	{up, down}, {left, right}
};

// 카메라 3의 회전은 4방향. 각 방향마다 상우, 우하, 하좌, 하상 각 2개 방향씩 시야를 계산.
void (*d3[4][2])(int, int, int[][8]) = {
	{up, right}, {right, down},
	{down, left}, {left, up}
};

// 이하동문...
void (*d4[4][3])(int, int, int[][8]) = {
	{left, up, right}, {up, right, down},
	{right, down, left}, {down, left, up}
};

// 이하동문...
void (*d5[1][4])(int, int, int[][8]) = {
	{left, up, right, down}
};

void dfs(int board[][8], vector<pair<int, pair<int, int>>>& v, int vIndex) {
	/*
	CCTV의 시야를 모두 체크했다면 사각지대를 계산해서 min 값을 추출한다.
	*/
	if (vIndex == v.size()) {
		//cout << "----------------\n";
		int tempResult = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				//cout << board[i][j] << " ";
				if (board[i][j] == 0) tempResult++;
			}
			//cout << '\n';
		}
		result = min(result, tempResult);
		//cout << "---------------- : " << tempResult << "\n";
		return;
	}
	
	int tempBoard[8][8];

	auto now = v[vIndex];

	int camera = now.first;
	int y = now.second.first, x = now.second.second;

	for (int i = 0; i < 4; i++) {
		copy(board[0], &board[7][8], tempBoard[0]);
		for (int j = 0; j < 4; j++) {
			if (dAll[camera - 1][i][j] != nullptr)
				dAll[camera - 1][i][j](y, x, tempBoard);
			/*if (camera == 1) {
				d1[i][j](y, x, tempBoard);
			}
			else if (camera == 2) {
				d2[i][j](y, x, tempBoard);
			}
			else if (camera == 3) {
				d3[i][j](y, x, tempBoard);
			}
			else if (camera == 4) {
				d4[i][j](y, x, tempBoard);
			}
			else if (camera == 5) {
				d5[i][j](y, x, tempBoard);
			}*/
		}
		dfs(tempBoard, v, vIndex + 1);
	}
}

void function(int board[8][8]) {
	board[0][0] = 100;
}


int main() {
	cin >> N >> M;

	result = 8 * 8 + 1; // 그냥 기본 값.
	vector<pair<int, pair<int, int>>> v; // CCTV를 담을 벡터 (카메라 종류, (카메라 y, x))
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] > 0 && board[i][j] < 6) { // 입력값이 1~5 면 CCTV 라는 뜻이다.
				v.push_back(pair<int, pair<int, int>>(board[i][j], pair<int, int>(i, j)));
			}
			
		}
	}
	dfs(board, v, 0);

	cout << result << '\n';
}

/*
4 4
0 0 0 0
0 4 0 0
0 0 0 0
0 0 0 0



*/