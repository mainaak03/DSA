#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* left;
	node* right;

	node(int val) {
	data=val;
	left=NULL;
	right=NULL;
  }
};

node* addBST(node* root, int val) {
	if (root==NULL) {
		return new node(val);
	}
	else if (val<root->data) {
		root->left=addBST(root->left, val);
	}
	else {
		root->right=addBST(root->right, val);
	}
	return root;
}

void Inorder(node* root) {
	if (root==NULL) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main() {
	node* root=NULL;
	root=addBST(root, 1);
	for (int i=1; i<7; i++) {
		addBST(root, 2*i);
	}
	Inorder(root);
	return 0;
}