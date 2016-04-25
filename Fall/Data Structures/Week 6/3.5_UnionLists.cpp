#include <iostream>
#include <algorithm>
#include <vector>
//#include "templateUnion.h"

using namespace std;

int main() {
	int ListA[] = {1,2,3,4,5};
	int ListB[] = {5,6,7,8,9};
	vector<int> v(10);
	vector<int>::iterator iter;

	//iter = OutputIterator set_union<InputIterator1,InputIterator2,OutputIterator>::set_union(ListA, ListA + 5, ListB, ListB + 5, v.begin());

	iter=std::set_union(ListA, ListA + 5, ListB, ListB + 5, v.begin());

	v.resize(iter-v.begin());

	cout << "The union has " << (v.size()) << " elements:\n";
	for (iter=v.begin(); iter != v.end(); iter++) {
		cout << ' ' << *iter;
		cout << '\n';
	}

	return 0;
}