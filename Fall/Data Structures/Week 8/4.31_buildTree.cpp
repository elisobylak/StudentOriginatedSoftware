#include <iostream>

using namespace std;

struct node
{
	int element;
	node *left;
	node *right;
};

int size(struct node* node) {
	if(node == NULL) {
		return(0);
	} else {
		return(size(node -> left) + 1 + size(node -> right));
	}
}

int main() {
	node *root;

	root = new node;
	root -> element = 12;
	root -> left = 0;
	//root -> right = 1;

	cout << root << endl;

	//size(1);
}