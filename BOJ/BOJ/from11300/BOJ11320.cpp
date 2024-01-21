// https://www.acmicpc.net/problem/11320 BOJ 11320 삼각 무늬 - 1 2024-01-21
/*
쉬운 문제지만 뭔가 바로 생각이 안났다.
정삼각형 A, B 가 주어지며 A를 B로 덮어야할 때, A를 온전히 다 덮을 B의 개수를 구하는 문제.
한 변의 길이가 1인 정삼각형으로 A를 덮으려면 A의 한 변이 1, 2, 3, 4 일 때마다 크기가 제곱배로 늘어난다.
마찬가지로 B도 그렇다.
그럼 A를 B로 덮으려면 A를 덮기 위해 필요한 한 변의 길이가 1인 정삼각형의 개수를
B를 덮기 위해 필요한 한 변의 길이가 1인 정삼각형의 개수로 나누면 된다.
물론 B의 개수를 구하는 것이므로 정수로 처리해야 하고, 소수점은 올림처리 해야한다.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int iteration;
	double A, B;
	cin >> iteration;

	while (iteration--) {
		cin >> A >> B;

		cout << (int)ceil((A * A) / (B * B)) << '\n';
	}
}