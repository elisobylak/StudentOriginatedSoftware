#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int printLots(list<int> x, list<int> n) {

	list<int>::iterator k = x.begin();
	cout << "List P: " << endl;
	while(k != x.end()) {
		cout << *k << " " << endl;
		k++;
	}

	list<int>::iterator j = n.begin();
	cout << "List L: " << endl;
	while(j != n.end()) {
		cout << *j << " " << endl;
		j++;
	}

	cout << "List P on List L: " << endl;

	/*list<int>::iterator result;

	for(result = n.begin(); result != n.end(); result++) {
		if()
		cout << *result << endl;
	}
	*/

	list<int>::iterator i;
	//int nPosition = distance(n.begin(), i);
	//cout << nPosition << endl;
	list<int>::iterator result;
	for(i = x.begin(); i != x.end(); i++) {
		for(result = n.begin(); result != n.end(); result++) {
			cout << *result << endl;
		}
		//result = find(n.begin(), n.end(), *i);
		//cout << *result << endl;
	}

	cout << "This is it!" << endl;

	list<int>::iterator pointer;
	for(pointer = n.begin(); pointer != n.end(); pointer++) {
		cout << *pointer << endl;
	}

	list<int>::iterator ptr;
	int index;

	for(index = 0, ptr = x.begin(); index < 10 && ptr != x.end(); index++, ptr++) {
		cout << *ptr << endl;
	}


	/*result = find(n.begin(), n.end(), 71;
	cout << *result << endl;
	*/
	/*list<int>::iterator iter = x.begin();
	while(iter != x.end()) {
		if(*iter)
	}
	*/

	return 0;
}

int main() {
	list<int> listP;
	int valueP1 = 1;
	int valueP2 = 3;
	int valueP3 = 4;
	int valueP4 = 6;
	listP.push_back (valueP1);
	listP.push_back (valueP2);
	listP.push_back (valueP3);
	listP.push_back (valueP4);


	list<int> listL;
	int valueL1 = 70;
	int valueL2 = 71;
	int valueL3 = 73;
	int valueL4 = 74;
	int valueL5 = 75;
	int valueL6 = 76;
	listL.push_back (valueL1);
	listL.push_back (valueL2);
	listL.push_back (valueL3);
	listL.push_back (valueL4);
	listL.push_back (valueL5);
	listL.push_back (valueL6);


	printLots(listP, listL);

	return 0;
}
