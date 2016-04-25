#include <iostream>
using namespace std;


/*int userNum() {

	return n;
}
*/
int oneCounter = 1;

void numOnes(int n) {


	if(n == 0) {
		cout << "0\n";
	}
	else if(n == 1) {
		cout << "1\n";
		//oneCounter = oneCounter + 1;
		cout << "Number of ones in the binary representation of N is: " << oneCounter << "\n";
	}
	else {
		cout << n % 2 << "\n";
		if(n % 2 == 1) {
			oneCounter = oneCounter + 1;
		}
		//oneCounter = oneCounter + 1;
		numOnes(n/2);
		//cout << n % 2 << "\n";
		//numOnes(n%2);
		//cout << main(n%2);
	}
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	//int n = 5;
	numOnes(n);
	return 0;
}


