#include "list.h"
#include "BST_soln_b.h"
#include <iostream>
#include <cstdlib>
using namespace std;

template <typename Object>
class setBST {
private:
	struct BSTNode {
		Object data;
		BSTNode *left;
		BSTNode *right;

		BSTNode(const Object & d = Object(), BSTNode *l = NULL, BSTNode *r = NULL) 
			: data(d), left(l), right(r) {}
	};

public:

	BST(): root(NULL) {}

	~BST() {
		clear();
		delete root;
	}

	bool empty() {
		return root == NULL;
	}

	void insert(Object & o) {
		insert(o, root);
	}

	bool find(const Object & o) {
		return find(o,root);
	}

	typename List<Object>::const_iterator begin() {
		l = inorder();
		return l->begin();
	}

	typename List<Object>::const_iterator end() {
		return l->end();
	}

	void removeNode(const Object & o) {
		if(!root)
			return;
		removeRec(o, root);
	}

	bool operator== (const BST & rhs) const {
		return isEq(root, rhs.root);
	}

	int size() {
		return size(root);
	}

	void setUnion(int a, int b) {
		return root1->root2
	}

private:

	void insert(const Object & o, BSTNode *& cur) {
		if(cur == NULL)
			cur = new BSTNode(o);
		else if(cur->data == 0)
			return;
		else if(o < cur->data)
			insert(o, cur->left);
		else
			insert(o, cur->right);
	}

	bool find(const Object &o, BSTNode *cur) {
		if(!cur)
			return 0;
		if(cur->data == o)
			return 1;
		else if(cur->data > o)
			return find(o, cur->left);
		else
			return find(o, cur->right);
	}

	void removeRec(const Object & o, BSTNode *& cur) {
		if(cur == NULL)
			return;
		if (o<cur->data)
			deleteRec(o, cur->left);
		else if (o>cur->data)
			deleteRec(o, cur->right);
		else if (cur->left && cur->right) {
			// two kids
			cur->data = findMaxAndDel(cur->left);
		} else if (cur->left || cur->right) {
			// only one kid
			BSTNode *save = cur;
			cur = cur->left ? cur->left : cur->right;
			delete save;
		} else {
			// leaf
			BSTNode *save = cur;
			cur = NULL;
			delete save;
		}
	}

	int size(BSTNode *cur) const {
		if (cur == NULL)
			return 0;
		else return size(cur->left) + size(cur->right) + 1;
	}

	void setUnion(int a, int b) {
		int root1 = find(a);
		int root2 = find(b);
		if(root1 != root2)
			root1 = root2;
	}

}