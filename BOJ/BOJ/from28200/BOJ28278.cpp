// https://www.acmicpc.net/problem/28278 스택 2 2023-12-04
#include <iostream>

using namespace std;

class Node {
public:
	Node* next;
	int value;

	Node() : Node(nullptr, 0) {}
	Node(Node* next, int value) : next(next), value(value) {}
};

class Stack {
public:
	Node* top;
	int size;

	Stack() : size(0), top(nullptr) {}

	void add(int value) {
		Node* new_node = new Node(top, value);
		top = new_node;
		++size;
	}

	int pop() {
		if (size == 0) {
			return -1;
		}
		int value = top->value;
		Node* n = top->next;
		delete(top);
		top = n;
		--size;
		return value;
	}

	int get_top() {
		if (size == 0) {
			return -1;
		}
		return top->value;
	}

	bool empty() {
		return size == 0;
	}

	int get_size() {
		return size;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int instruction_count;
	cin >> instruction_count;

	Stack s{};
	for (int i = 0; i < instruction_count; i++) {
		int instruction;
		cin >> instruction;
		if (instruction == 1) {
			int value;
			cin >> value;
			s.add(value);
		}
		else if (instruction == 2) {
			cout << s.pop() << '\n';
		}
		else if (instruction == 3) {
			cout << s.get_size() << '\n';
		}
		else if (instruction == 4) {
			cout << s.empty() << '\n';
		}
		else if (instruction == 5) {
			cout << s.get_top() << '\n';
		}
	}
}