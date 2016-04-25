#include <iostream.h>

using namespace std;

class Stack {
   int MaxStack;
   int EmptyStack;
   int top;
   char* items;
public:
   Stack(int);
   ~Stack();
   void push(char);
   char pop();
   int isempty();
};


Stack::Stack(int size) {
   MaxStack = size;
   EmptyStack = -1;
   top = EmptyStack;
   items = new char[MaxStack];
}

Stack::~Stack() {delete[] items;}

void Stack::push(char c) {
   items[++top] = c;
}

char Stack::pop() {
   return items[top--];
}

int Stack::top()  {
   return top;
}

int Stack::isempty()  {
   return top == EmptyStack;
}


int main() {

   Stack s(10); // 10 chars
   char ch;
   while ((ch = cin.get()) 
         != '\n')
      if (!s.full()) s.push(ch);
   while (!s.isempty())
      cout << s.pop();
   cout << endl;
   return 0;
}