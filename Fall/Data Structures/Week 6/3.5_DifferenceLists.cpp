#include <iostream>
#include <algorithm>
#include <vector>
//#include "templateUnion.h"

using namespace std;

int main() {
	int ListA[] = {5,10,15,20,25};
	int ListB[] = {10,20,30,40,50};
	vector<int> v(10);
	vector<int>::iterator iter;

	//iter = OutputIterator set_union<InputIterator1,InputIterator2,OutputIterator>::set_union(ListA, ListA + 5, ListB, ListB + 5, v.begin());

	iter=std::set_difference(ListA, ListA + 5, ListB, ListB + 5, v.begin());

	v.resize(iter-v.begin());

	cout << "The union has " << (v.size()) << " elements:\n";
	for (iter=v.begin(); iter != v.end(); iter++) {
		cout << ' ' << *iter;
		cout << '\n';
	}

	return 0;
}