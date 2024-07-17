// https://www.acmicpc.net/problem/26059 BOJ 26059 Вендомат 2024-07-16
#include <iostream>
#include <sstream>

using namespace std;

void splitMoney(string& input, int& head, int& tail) {
	istringstream iss(input);
	string buffer;

	getline(iss, buffer, ',');
	head = stoi(buffer);
	getline(iss, buffer, ',');
	tail = stoi(buffer);
}

bool isAffordable(int balance, int price) {
	if (balance >= price) {
		if (balance % 100 >= price % 100) return true;
	}
	return false;
}

int main() {
	int n;
	string balanceInput;
	cin >> n >> balanceInput;

	int remainingHead, remainingTail;
	splitMoney(balanceInput, remainingHead, remainingTail);
	int balance = remainingHead * 100 + remainingTail;

	string result = "-1";
	int maxPrice = -1;
	while (n-- > 0) {
		string name, priceInput;
		cin >> name >> priceInput;

		int head, tail;
		splitMoney(priceInput, head, tail);
		int price = head * 100 + tail;

		if (isAffordable(balance, price) && price > maxPrice) {
			maxPrice = price;
			result = name;
		}
	}

	cout << result;
}

/*
3 10,10
a 10,11
b 11,09
c 20,00


*/