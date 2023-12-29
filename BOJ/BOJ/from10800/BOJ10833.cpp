// https://www.acmicpc.net/problem/10833 BOJ 10833 ��� 2023-12-29 ���� �� ���� ��������.
#include <iostream>

using namespace std;

int main() {
	int case_count;
	cin >> case_count;

	int result = 0;
	for (int i = 0; i < case_count; i++) {
		int student_count, apple_count;
		cin >> student_count >> apple_count;

		result += apple_count % student_count;
	}

	cout << result;
}