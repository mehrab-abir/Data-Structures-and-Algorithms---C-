#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Node {
public:
	int value;
	Node* left;
	Node* right;

	Node(int value) {
		this->value = value;
		this->left = NULL;
		this->right = NULL;
	}
};

//pre-order traversal
//root - left - right
void preorder(Node* root) {

	if (root == NULL) {
		return;
	}

	cout << root->value << " ";
	preorder(root->left);
	preorder(root->right);
}


int main() {
	Node* root = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);

	root->left = a;
	root->right = b;
	a->left = c;
	b->left = d;
	b->right = e;

	cout << "Pre-order traversal: ";
	preorder(root);

	cout << endl;

	return 0;
}
