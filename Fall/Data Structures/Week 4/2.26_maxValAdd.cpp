/* I tried implementing these problems in c++ and got this one program
to run, I was not 100% sure what the question was looking for but
this program has a function that will take an array of ints
and find the biggest difference between (range?) in the array */2


#include <iostream>
using namespace std;


int max_Val(int arr[],int arr_size)  {
	int max_val = arr[1] - arr[0];
	int i, j;

	//cout << "Debug one" << endl;

	for(i = 0; i < arr_size; i++) {
		cout << "Value of i: " << i << endl;
		for(j = i + 1; j < arr_size; j++) {
			cout << "value of j: " << j << endl;
			if(arr[j] - arr[i] >= max_val) {
				max_val = arr[j] - arr[i];
				cout << "value of max_val: " << max_val << endl;
			}
		}
	}
	cout << max_val << endl;
	return 0;
}

int main() {
	int arr[] = {900,1,2,100};
	cout << (max_Val(arr, 4)) << "\n";
	cout << "Done running" << endl;
	return 0;
}