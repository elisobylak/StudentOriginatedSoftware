#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main(){

vector<int> nums;
int i;
int k = 0;
int j = 1;
int sum;
int isSum = 17;

int ARRAYSIZE = 5;


for (i = 0; i < ARRAYSIZE; i++) {
	nums.push_back(rand() % 10);
	cout << "All the numbers in the array: " << nums[i] << endl;
}

cout << "All possible combinations of the elements" << endl;
do {
	//cout << nums[0] << "," << nums[1] << "," << nums[2] << "," << nums[3] << "," << nums[4] << endl;
	cout << "Iteration is: " << k << endl;
	for (i = 0; i < ARRAYSIZE - 1; i++) {
	sum = nums[i] + nums[i+j];
	cout << sum << endl;
	if(sum == isSum) {
		cout << "Done! " << nums[i] << " and " << nums[i+j] << " equals: " << sum << endl;
		return 0;
	}
	}
	k++;
} while (next_permutation(nums.begin(),nums.end()));

return 0;
}