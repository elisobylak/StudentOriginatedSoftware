#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> listP;

	int value1 = 1;
	int value2 = 3;
	int value3 = 4;
	int value4 = 6;

	listP.push_back (value1);
	listP.push_back (value2);
	listP.push_back (value3);
	listP.push_back (value4);

	cout << listP << endl;

	return 0;
}