// https://www.acmicpc.net/problem/26332 BOJ 26332 Buying in Bulk 2023-12-15
#include <iostream>

using namespace std;

int main() {
	int case_count;
	cin >> case_count;

	int ea, price;
	for (int i = 0; i < case_count; i++) {
		cin >> ea >> price;
		cout << ea << " " << price << '\n';

		cout << price + (ea - 1) * (price - 2) << '\n';
	}
}