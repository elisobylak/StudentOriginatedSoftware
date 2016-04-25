#include <iostream>


template <typename Object>
class BST {

private: 
	struct Node {
		Object value;
		Node * left;
		Node * right;
	};

void insert(Node *&temp, Object x) {
	if(temp == NULL) {
		std::cout << x << std::endl;
		temp = new Node();
	}
	else if(temp -> value < x) {
		//std::cout << x << std::endl;
		insert(temp -> left, x);
	}
	else {
		//std::cout << x << std::endl;
		insert(temp -> right, x);
	}
}

/*bool find(Object x) {
	Node *temp = root;
	if(temp -> value = NULL) {
		std::cout << "The tree is empty" << std::endl;
		return;
	}
}
*/

public:
//BST() {root = NULL;}
Node *root = NULL;

bool isEmpty() const {
	return root == NULL;
}

void insert(Object x) {
	insert(root, x);
}

//bool find(Object x) {
//
//}

};

int main() {
	BST<int> t;
	t.insert(1);
	t.insert(6);
	t.insert(4);
	//t.find(1);
	std::cout << t.isEmpty() << std::endl;
	std::cout << "Debugging test print" << std::endl;
}