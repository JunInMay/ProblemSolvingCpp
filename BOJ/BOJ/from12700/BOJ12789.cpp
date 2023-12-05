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

		for (int j = 0; j < st.size(); j++) {
			if (st.top() == next) {
				cout << st.top() << "Ãâ·ÂµÊ \n";
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
