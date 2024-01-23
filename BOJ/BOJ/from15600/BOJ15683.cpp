// https://www.acmicpc.net/problem/15683 BOJ 15683 ���� 2024-01-23
/*
DFS ����.
ī�޶󸶴� �þ��� ������ �ٸ��� ������ �� ������ �� ��������� �ؼ� ������ ��������.
���� up, down, left, right �� ���� �þ߸� üũ�ϴ� �Լ��� �����
�� ī�޶� 1~5 ���� ���� ȸ�� ���̽��� �ٸ���, ȸ�� ���̽����� ���� �þ߰� �ٸ��Ƿ�
�װ��� 2���� �Լ� ������ �迭�� �����ߴ�.
3���� �Լ� ������ �迭�� �����ϴ°� �̻����̶�� �����ϱ� �ߴ�.
�ֳĸ� if camera == 1 , camera == 2 �� ���� �б⸦ ���ְ�
dCamera[camera][i][j] �� ���� �������� �Լ��� �ҷ��� �� �ְ� �Ǳ� �����̴�.

������ �帧 1. 
�׷��� �� ī�޶󸶴� ȸ�� Ƚ���� 4��, 2���� �ٸ���, �� �� ȸ������ ����� �þ��Լ��� ������ �ٸ���.
������ �������� �ʾƼ� ������ �迭�� ��Ⱑ �������. ������ ���� �� �־��µ�, �Լ��� �ߺ� ȣ���ϰ� �� ���̴�.
�̸��׸� dCamera[5][4][4] �� �����ϸ� �Ǳ� �ϴµ�, �̷��� 
ī�޶� 1���� dCamera[0][0][3].. �̷� ������ ���ʿ��ϰ� �þ��Լ��� 16ȸ ȣ���Ѵ�. 
ī�޶� 1���� ��� dCamera[0][0][0], dCamera[0][1][0], dCamera[0][2][0], dCamera[0][3][0]
�� 4���� Ȯ���ϸ� �Ǵµ� ���̴�. �� ���� ���� �־�� �ǰ� �ȴ�. �ٵ� �׷��� �� �� ���⵵ �ϰ�.

������ �帧 2.
�����Լ��� ���� 3���� �迭�� �� ���� ä����~! �� ������ �ߴ�.

������ �帧 3.
������ ������ ����� �迭�� null ���� �ڵ����� �����ʳ�? �׳� nullptr üũ�� ����.
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
CCTV �þ� �Լ� ���� (�����¿�)
*/
// ��(6)�� �ɸ��� �ʴ´ٸ� 7(�þ�)�� üũ�Ѵ�.
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

// �����Լ�
void gara(int y, int x, int board[][8]) { }

// [ī�޶� ȸ�� ������ ���][ȸ������ �� ���Ǵ� CCTV �þ��Լ��� ����]
int dSizes[5][2] = {
	{4, 1}, {2, 2}, {4, 2}, {4, 3}, {1, 4}
};

/*
������ �帧 2.
������������������������
�̰� �´��� �𸣰ڴ�.
�ϴ� �����Լ��� ���� �����ߴµ�, �׳� ũ�⸦ �ָ� ������ �������� null���� ���� �ʳ�?
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
������ �帧 3.
������ �������� �����ϸ� nullptr �ƴѰ�? �׳� �����ϰ� nullptr üũ�ϸ���ݾ�?
*/
void (*dAll[5][4][4])(int, int, int[][8]) = {
	// 1�� ī�޶�
	{
		{left},
		{right},
		{up},
		{down}
	},
	// 2�� ī�޶�
	{
		{up, down},
		{left, right}
	},
	// 3�� ī�޶�
	{
		{up, right},
		{right, down},
		{down, left},
		{left, up}
	},
	//4 �� ī�޶�
	{
		{left, up, right},
		{up, right, down},
		{right, down, left},
		{down, left, up}
	},
	//5�� ī�޶�
	{
		{left, up, right, down}
	}
};

/*
������ �帧 1.
*/
// ī�޶� 1�� ȸ���� 4����. �����¿�.
void (*d1[4][1])(int, int, int[][8]) = {
	{left}, {right}, {up}, {down}
};

// ī�޶� 2�� ȸ���� 2����. �� ���⸶�� ����, �¿�� 2�� ���⾿ �þ߸� �����.
void (*d2[2][2])(int, int, int[][8]) = {
	{up, down}, {left, right}
};

// ī�޶� 3�� ȸ���� 4����. �� ���⸶�� ���, ����, ����, �ϻ� �� 2�� ���⾿ �þ߸� ���.
void (*d3[4][2])(int, int, int[][8]) = {
	{up, right}, {right, down},
	{down, left}, {left, up}
};

// ���ϵ���...
void (*d4[4][3])(int, int, int[][8]) = {
	{left, up, right}, {up, right, down},
	{right, down, left}, {down, left, up}
};

// ���ϵ���...
void (*d5[1][4])(int, int, int[][8]) = {
	{left, up, right, down}
};

void dfs(int board[][8], vector<pair<int, pair<int, int>>>& v, int vIndex) {
	/*
	CCTV�� �þ߸� ��� üũ�ߴٸ� �簢���븦 ����ؼ� min ���� �����Ѵ�.
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

	result = 8 * 8 + 1; // �׳� �⺻ ��.
	vector<pair<int, pair<int, int>>> v; // CCTV�� ���� ���� (ī�޶� ����, (ī�޶� y, x))
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] > 0 && board[i][j] < 6) { // �Է°��� 1~5 �� CCTV ��� ���̴�.
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