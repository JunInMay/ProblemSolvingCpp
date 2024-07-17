// https://www.acmicpc.net/problem/28279 덱 2 BOJ28279 2023-12-09
#include <iostream>

using namespace std;

class Node {
public:
	Node* next;
	Node* before;
	int value;
	Node(Node* before, Node* next, int v) : next(before), before(next), value(v) {}
};

class Deque {
public:
	Node* front;
	Node* rear;
	int size;

	Deque() : front(nullptr), rear(nullptr), size(0) {}

	void push_front(int v) {
		Node* n = new Node(nullptr, nullptr, v);
		if (size == 0) {
			rear = n;
		}
		else {
			front->before = n;
		}
		n->next = front;
		front = n;
		++size;
	}

	void push_rear(int v) {
		Node* n = new Node(nullptr, nullptr, v);
		if (size == 0) {
			front = n;
		}
		else {
			rear->next = n;
		}
		n->before = rear;
		rear = n;
		++size;
	}

	int pop_front() {
		int result = -1;
		if (size != 0) {
			Node* f = front;
			result = f->value;
			front = f->next;
			delete f;
			--size;
		}
		return result;
	}

	int pop_rear() {
		int result = -1;
		if (size != 0) {
			Node* r = rear;
			result = r->value;
			rear = r->before;
			delete r;
			--size;
		}
		return result;
	}

	int get_front() {
		int result = -1;
		if (size != 0) {
			result = front->value;
		}
		return result;
	}

	int get_rear() {
		int result = -1;
		if (size != 0) {
			result = rear->value;
		}
		return result;
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int instruction_count;

	cin >> instruction_count;

	Deque dq;

	for (int i = 0; i < instruction_count; i++) {
		int instruction;
		cin >> instruction;
	
		if (instruction == 1) {
			int value;
			cin >> value;
			dq.push_front(value);
		}
		else if (instruction == 2) {
			int value;
			cin >> value;
			dq.push_rear(value);
		}
		else if (instruction == 3) {
			cout << dq.pop_front() << '\n';
		}
		else if (instruction == 4) {
			cout << dq.pop_rear() << '\n';
		}
		else if (instruction == 5) {
			cout << dq.size << '\n';
		}
		else if (instruction == 6) {
			int result = 0;
			if (dq.size == 0) result = 1;
			cout << result << '\n';
		}
		else if (instruction == 7) {
			cout << dq.get_front() << '\n';
		}
		else if (instruction == 8) {
			cout << dq.get_rear() << '\n';
		}
	}
}