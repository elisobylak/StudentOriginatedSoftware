#include <iostream>
using namespace std;

int numOnes(int n) {
	if(n == 0) {
		return 0;
	}
	else if(n == 1) {
		return 1;
	}
	else {
		cout << numOnes(n/2)+numOnes(n%2);
	}
}

numOnes(4);