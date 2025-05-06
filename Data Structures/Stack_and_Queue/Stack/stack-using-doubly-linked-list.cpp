#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node* prev;

	Node(int val) {
		this->val = val;
		this->next = NULL;
		this->prev = NULL;
	}
};

class myStack {
public:
	Node* head = NULL;
	Node* tail = NULL;

	int length = 0; //to track size so complexity remains O(1), otherwise complexity will be O(N)

	void push(int val) {
		Node* newnode = new Node(val);
		length++; //incrementing length everytime a node is created

		if (head == NULL) {
			head = newnode;
			tail = newnode;
			return;
		}

		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}

	void pop() {
		Node* deleteNode = tail;

		tail = tail->prev;
		delete deleteNode;

		length--; //decrementing length everytime a node is deleted

		if (tail == NULL) {
			head = NULL;
			return;
		}

		tail->next = NULL;
	}

	int top() {
		return tail->val;
	}

	int size() {
		return length; //the current length
	}

	bool empty() {
		//shortcut
		return head == NULL; //head null hole true r na hole false return korbe

		/*
		if (head == NULL) {
			return true;
		}
		else {
			return false;
		}
		*/
	}
};

int main() {
	myStack st;

	int n;
	cout << "Enter stack size: ";
	cin >> n;

	//taking input for stack
	for (int i = 0; i < n; i++) {
		int val;
		cout << "Enter number " << i + 1 << ": ";
		cin >> val;

		st.push(val);
	}

	//printing stack elements
	cout << "The stack: " << endl;
	while (!st.empty()) {
		cout << st.top() << endl;
		st.pop();
	}

	if (!st.empty()) {
		cout << "Top: " << st.top() << endl;
	}
	else {
		cout << "Stack is empty" << endl;
	}
	

	return 0;
}