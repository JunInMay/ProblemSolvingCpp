// https://www.acmicpc.net/problem/12789 도키도키 간식드리미 2023-12-05
#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st;

	int student_count;

	cin >> student_count;

	int next = 1;
	string result = "Nice\n";
	for (int i = 0; i < student_count; i++) {
		int student;
		cin >> student;
		st.push(student);

		int size = st.size();
		for (int j = 0; j < size; j++) {
			if (st.top() == next) {
				st.pop();
				next += 1;
			}
			else {
				break;
			}
		}
	}

	if (st.size() != 0)
		result = "Sad";
	
	cout << result;
}
