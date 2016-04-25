#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;


vector<int> lrg;
vector<int> sml;
int one = 1;

int main(){

	vector<int> input;

	for(int i = 0; i < 10; i++){
		input.push_back(rand() % 10);
		cout << input[i] << endl;
		if(input[i] > input[i+one]) {
			lrg.push_back(i);
		} else {
			sml.push_back(i);
		}
	}
	cout << "large list: ";
	for(vector<int>::const_iterator i = lrg.begin(); i != lrg.end(); i++)
		cout << *i << " ";
	cout << "small list: ";
	for(vector<int>::const_iterator j = sml.begin(); j != sml.end(); j++)
		cout << *j << " ";
}