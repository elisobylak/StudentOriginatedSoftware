#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#include <string>

/*
This is my scheduling program. 
Things i've included so far;
--> Queue with function
	-enqueue
	-dequeue
	-display
--> Tick() funciton
--> Main is the menu and how the user interfaces with the sceduler 
I am still working on;
--> ranID() function which produces unique IDs for jobs
--> I want to add two fields to the queue structure to hold the proc_id and n_ticks
*/

using namespace std;

struct node{
    int info;
    struct node *next;
};

class Queue{

    private:
        node *rear;
        node *front;

    public:
        Queue();
        void enqueue();
        void dequeue();
        void display();

};

Queue::Queue(){

    rear = NULL;
    front = NULL;
}

void Queue::enqueue(){

    int data;

    node *temp = new node;

    cout<<"Enter the data to enqueue: ";

    cin>>data;

    temp->info = data;

    temp->next = NULL;

    if(front == NULL){

        front = temp;

    }else{

        rear->next = temp;
    }
    rear = temp;
}

void Queue::dequeue(){

    node *temp = new node;

    if(front == NULL){

        cout<<"\nQueue is Emtpty\n";

    }else{

        temp = front;

        front = front->next;

        cout<<"The data Dequeued is "<<temp->info << endl;

        delete temp;
    }
}

void Queue::display(){

    node *p = new node;

    p = front;

    if(front == NULL){

        cout<<"\nNothing to Display\n";

    }else{

        while(p!=NULL){

            cout<<endl<<p->info<<endl;

            p = p->next;

        }
    }
}

int tickVal = 0;

int Tick() {
	tickVal++;
	return 0;
}

int ranID() {
	int ranIDNum;

	srand(time(NULL));
	ranIDNum = rand() % 256;
	cout << "The random ID is " << ranIDNum << endl;
	return 0;
}

int main() {
	cout << "\n Welcome to Eli's Scheduler \n" << endl;

	char userEntry;
	int maxRUN = 0;




	Queue queue;

	queue.enqueue();
	queue.enqueue();
	queue.display();
	//queue.dequeue();
	//queue.dequeue();
	//queue.display();

	while (maxRUN < 100) {
    cout << "Type 'n' to advance system by one tick \n" << endl;
    cout << "Or type 'j' to enter a job into the queue \n" << endl;
    cout << "Or type 'p' to print the job list in the queue \n" << endl;
    cout << "Or type 'e' to exit the scheduler \n" << endl;

		cin >> userEntry;

		if(userEntry == 'n') {
			Tick();
			cout << "Tick Value currently is: " << tickVal << endl;

		} else if(userEntry == 'p') {
            queue.display();

        } else if(userEntry == 'j') {
			cout << "Enter a job: " << endl;
			queue.enqueue();
            ranID();

		} else if(userEntry == 'e') {
			cout << "Exiting the scheduler..." << endl;
			exit(0);

		} else {
			cout << "Please type one of the recognized commands; n-next tick, e-exit, etc." << endl;
		}

		//cout << userEntry << endl;
		maxRUN++;
	}

	return 0;
}