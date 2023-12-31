// https://www.acmicpc.net/problem/13909 창문 닫기 BOJ 13909 2023-12-02
/**
* 창문이 열려있으려면 n번 창문의 약수의 개수가 홀수여야한다.
* 약수의 개수가 홀수려면 소인수분해 했을 때 각 인수들의 계수가 짝수여야 한다.
* 왜냐하면 약수의 개수 = a^2 * b^2 ... 가 홀수가 되려면 3*3*3.. 이런 식이어야 하기 때문이다.
* 제곱수는 1 * a^2 * b^2 * c^2 ... 의 형태로 되어있다(a, b, c... 는 소수) 즉 약수의 개수 = 3*3*3... = 홀수이다.
* 그 외의 제곱수가 아닌 수는 1 * a^2 * b^2... 의 형태로 나타낼 수 없으므로 해당되지않는다.
* 즉 문제는 1부터 n까지의 수 중 제곱수의 개수를 찾는 것이다.
*/
#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;

	int i;
	for (i = 1; i * i <= number; i++) { }

	cout << i - 1;
}