// https://www.acmicpc.net/problem/15683 BOJ 15683 姶獣 2024-01-23
/*
DFS 庚薦.
朝五虞原陥 獣醤税 号狽戚 陥牽奄 凶庚拭 唖 号狽聖 陥 竺舛背操醤 背辞 姥薄戚 岡塊郡陥.
蟹澗 up, down, left, right 人 旭戚 獣醤研 端滴馬澗 敗呪研 幻級壱
唖 朝五虞 1~5 曽嫌 原陥 噺穿 追戚什亜 陥牽壱, 噺穿 追戚什原陥 左澗 獣醤亜 陥牽糠稽
益依聖 2託据 敗呪 匂昔斗 壕伸稽 淫軒梅陥.
3託据 敗呪 匂昔斗 壕伸稽 淫軒馬澗惟 戚雌旋戚虞壱 持唖馬延 梅陥.
訊劃檎 if camera == 1 , camera == 2 人 旭精 歳奄研 蒸蕉壱
dCamera[camera][i][j] 人 旭精 莫縦生稽 敗呪研 災君臣 呪 赤惟 鞠奄 凶庚戚陥.

持唖税 斐硯 1. 
益君蟹 唖 朝五虞原陥 噺穿 判呪亜 4鯵, 2鯵稽 陥牽壱, 暁 唖 噺穿原陥 紫遂拝 獣醤敗呪税 鯵呪亜 陥牽陥.
鯵呪亜 析舛馬走 省焼辞 析舛廃 壕伸拭 眼奄亜 嬢形頗陥. 常走稽 眼聖 授 赤醸澗汽, 敗呪研 掻差 硲窒馬惟 吃 依戚陥.
戚研砺檎 dCamera[5][4][4] 稽 識情馬檎 鞠延 馬澗汽, 戚君檎 
朝五虞 1腰精 dCamera[0][0][3].. 戚訓 縦生稽 災琶推馬惟 獣醤敗呪研 16噺 硲窒廃陥. 
朝五虞 1腰精 紫叔 dCamera[0][0][0], dCamera[0][1][0], dCamera[0][2][0], dCamera[0][3][0]
稽 4腰幻 溌昔馬檎 鞠澗汽 源戚陥. 聡 亜虞 葵聖 隔嬢醤 鞠惟 吉陥. 悦汽 益掘亀 吃 依 旭奄亀 馬壱.

持唖税 斐硯 2.
亜虞敗呪研 幻級嬢辞 3託据 壕伸税 朔 葵聖 辰酔切~! 澗 持唖聖 梅陥.

持唖税 斐硯 3.
嬢託杷 穿蝕拭 識情吉 壕伸精 null 葵戚 切疑生稽 級嬢亜走省蟹? 益撹 nullptr 端滴研 馬切.
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
CCTV 獣醤 敗呪 舛税 (雌馬疎酔)
*/
// 混(6)拭 杏軒走 省澗陥檎 7(獣醤)稽 端滴廃陥.
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

// 亜虞敗呪
void gara(int y, int x, int board[][8]) { }

// [朝五虞紺 噺穿 亜管廃 衣引][噺穿梅聖 凶 域至鞠澗 CCTV 獣醤敗呪税 鯵呪]
int dSizes[5][2] = {
	{4, 1}, {2, 2}, {4, 2}, {4, 3}, {1, 4}
};

/*
持唖税 斐硯 2.
せせせせせせせせせせせせ
戚惟 限澗走 乞牽畏陥.
析舘 亜虞敗呪研 搭背 舛税梅澗汽, 益撹 滴奄研 爽檎 嬢託杷 穿蝕拭識 null葵戚 級嬢亜走 省蟹?
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
持唖税 斐硯 3.
嬢託杷 穿蝕生稽 識情馬檎 nullptr 焼観亜? 益撹 識情馬壱 nullptr 端滴馬檎鞠摂焼?
*/
void (*dAll[5][4][4])(int, int, int[][8]) = {
	// 1腰 朝五虞
	{
		{left},
		{right},
		{up},
		{down}
	},
	// 2腰 朝五虞
	{
		{up, down},
		{left, right}
	},
	// 3腰 朝五虞
	{
		{up, right},
		{right, down},
		{down, left},
		{left, up}
	},
	//4 腰 朝五虞
	{
		{left, up, right},
		{up, right, down},
		{right, down, left},
		{down, left, up}
	},
	//5腰 朝五虞
	{
		{left, up, right, down}
	}
};

/*
持唖税 斐硯 1.
*/
// 朝五虞 1税 噺穿精 4号狽. 雌馬疎酔.
void (*d1[4][1])(int, int, int[][8]) = {
	{left}, {right}, {up}, {down}
};

// 朝五虞 2税 噺穿精 2号狽. 唖 号狽原陥 雌馬, 疎酔稽 2鯵 号狽梢 獣醤研 域至敗.
void (*d2[2][2])(int, int, int[][8]) = {
	{up, down}, {left, right}
};

// 朝五虞 3税 噺穿精 4号狽. 唖 号狽原陥 雌酔, 酔馬, 馬疎, 馬雌 唖 2鯵 号狽梢 獣醤研 域至.
void (*d3[4][2])(int, int, int[][8]) = {
	{up, right}, {right, down},
	{down, left}, {left, up}
};

// 戚馬疑庚...
void (*d4[4][3])(int, int, int[][8]) = {
	{left, up, right}, {up, right, down},
	{right, down, left}, {down, left, up}
};

// 戚馬疑庚...
void (*d5[1][4])(int, int, int[][8]) = {
	{left, up, right, down}
};

void dfs(int board[][8], vector<pair<int, pair<int, int>>>& v, int vIndex) {
	/*
	CCTV税 獣醤研 乞砧 端滴梅陥檎 紫唖走企研 域至背辞 min 葵聖 蓄窒廃陥.
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

	result = 8 * 8 + 1; // 益撹 奄沙 葵.
	vector<pair<int, pair<int, int>>> v; // CCTV研 眼聖 困斗 (朝五虞 曽嫌, (朝五虞 y, x))
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
			if (board[i][j] > 0 && board[i][j] < 6) { // 脊径葵戚 1~5 檎 CCTV 虞澗 倶戚陥.
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