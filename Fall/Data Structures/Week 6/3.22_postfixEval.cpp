#include <iostream>

using namespace std;

#define SIZE 10

	struct stack { 
	  stack();            
	  void push(char ch); 
	  char pop();
	  int isempty();
	  int peekPlace(int n);         
	private:
	  char stackData[SIZE]; 
	  int topOfStack;       
	};

	stack::stack()
	{
	  cout << "Constructing a stack\n";
	  topOfStack = 0;
	}

	void stack::push(char ch)
	{
	  if(topOfStack==SIZE) {
	    cout << "Stack is full\n";
	    return;
	  }
	  stackData[topOfStack] = ch;
	  topOfStack++;
	}

	char stack::pop()
	{
	  if(topOfStack==0) {
	    cout << "Stack is empty\n";
	    return 0; // return null on empty stack 
	  }
	  topOfStack--;
	  return stackData[topOfStack];
	}

	int stack::isempty()
	{
    return (topOfStack==0?1:0);
	}

	int stack::peekPlace(int n)
	{
    if(!isempty())
    {
        //cout << "\nElement at top is " << stackData[topOfStack-n] << endl;
        return stackData[topOfStack-n];
    }
    else
    {
        cout << "\nStack is empty";
        return 0;
    }
	}


bool IsOperand(char C) 
	{
		if(C >= '0' && C <= '9') return true;
		if(C >= 'a' && C <= 'z') return true;
		if(C >= 'A' && C <= 'Z') return true;
		return false;
	}

bool IsOperator(char C)
	{
		if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')
			return true;

		return false;
	}

//int Operate(int oper,) {


//	return 0;
//}

int main() {
	stack stackObject1, stackObject2, stackObject3, stackObject4;
	int index;

	stackObject1.push('-');
	stackObject1.push('4');
	stackObject1.push('+');
	stackObject1.push('*');
	stackObject1.push('3');
	stackObject1.push('2');
	stackObject1.push('1');


	cout << "Operands? (stack 2)" << endl;
	for(index = 0; index < 7; index++) {
		int checker;
		int checked;
		checker = stackObject1.peekPlace(index+1);
		checked = IsOperand(checker);
		//cout << checker << endl;
		if(checked == 1) {
			stackObject2.push(checker);
			stackObject4.push(checker);
			//cout << "HEY" << endl;
			//cout << stackObject4.pop() << endl;
			cout << stackObject2.pop() << endl;
		}
		//cout << IsOperand(checker) << endl;
	}


	cout << "Operators? (stack 3)" << endl;
	for(index = 0; index < 7; index++) {
		int checker;
		int checked;
		//int takeInOperONE;
		//int takeInOperTWO;
		checker = stackObject1.peekPlace(index+1);
		checked = IsOperator(checker);
		//cout << IsOperator(checker) << endl;
		if(checked == 1) {
			stackObject3.push(checker);
			//takeInOperONE = stackObject2.pop();
			//takeInOperTWO = stackObject2.pop();
			//cout << takeInOperONE << endl;
			//cout << takeInOperTWO << endl;
			//Operate(checker,)
			cout << stackObject3.pop() << endl;
		}
		//cout << stackObject4.peekPlace(index+1) << endl;
	
	}

	//cout << stackObject3.pop() << endl;

	return 0;
}


