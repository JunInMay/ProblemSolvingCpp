// https://www.acmicpc.net/problem/29141 BOJ 29141 Лестница 2024-04-18
/*
브론즈 문제인데 골썩인 문제... 난 바보인가보다... 다른 사람 파이썬 풀이(https://github.com/AutoclickerI/Baekjoon/blob/main/%EB%B0%B1%EC%A4%80/Bronze/29141.%E2%80%85%D0%9B%D0%B5%D1%81%D1%82%D0%BD%D0%B8%D1%86%D0%B0/%D0%9B%D0%B5%D1%81%D1%82%D0%BD%D0%B8%D1%86%D0%B0.py)
를 뒤져보고 이해하는 데 1시간은 넘게 걸린 것 같다. 링크가 동작이 안되는데 이유를 모르겠다.
github.com/AutoclickerI/Baekjoon/blob/main/백준/Bronze/29141.%E2%80%85Лестница/Лестница.py 이다.

1. 문제에선 두 지점의 거리와 계단의 최소 너비와 최대 높이를 주었다.
2. 문제에선 계단의 개수를 최대로 하려고 한다.
3. 2.에 따라 즉 계단 최소 너비로 나눈 개수만큼 계단을 만들면 된다. 그래야 계단이 제일 많아지니까.
4. 계단은 주어진 높이에서 조건만 없다면 몇 개든 만들 수 있다. 예를 들어 100개를 만든다고 하면 가로를 100으로 나누고, 세로를 100으로 나눈 너비와 높이를 가진 계단을 만들면 된다.
5. 4.에 따라 1.의 조건만 만족한다면 계단이 몇 개이든 만들 수 있다.
6. 즉 3.에 따라 최소 너비로 두 지점의 너비를 나누어 최대 계단 개수(자연수)를 구하고, 그렇게 구해진 (최대 계단 개수 * 최대 높이)가 두 지점 사이의 높이를 채울 수 있는지 확인하면 된다.
7. 6.에 따라 정답은 (너비 / 최대 계단 개수) 와 (높이 / 최대 계단 개수) 가 된다.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// a : 계단 너비의 최소치
	// b : 계단 높이의 최고치
	int xa, ya, xb, yb, a, b;
	cin >> xa >> ya >> xb >> yb >> a >> b;
	int x = abs(xa - xb); // 계단을 만들 총 너비
	int y = abs(ya - yb); // 계단을 만들 총 높이

	int maxStairs = x / a; // 최대로 만들 수 있는 계단의 개수. 자연수만 가능.

	/*
	* maxStairs가 0인 경우 : 계단을 만들 총 너비보다 계단 너비의 최소치가 더 큰 경우. 따라서 한 개도 만들 수 없음
	* maxStairs * b < y 인 경우 : 계단을 아무리 높게 만들고, 많이 만들어도 계단이 총 높이를 충족할 수 없음
	*/
	if (maxStairs == 0 || maxStairs * b < y) {
		cout << -1;
	}
	/*
	* 그 외의 경우 : 계단을 maxStairs 개수만큼 만들 수 있음. 너비와 높이는 각각 x / maxStairs 와 y / maxStairs
	*/
	else {
		cout << x << " " << maxStairs << '\n' << y << " " << maxStairs;
	}

}