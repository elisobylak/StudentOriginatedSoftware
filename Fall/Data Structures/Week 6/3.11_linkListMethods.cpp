#include <iostream>

using namespace std;

struct node {
	int info;
	struct node *next;
} *start;


class singleLink_list {
public:
	node* create_node(int);
	void search();
	void addNewValue();
	void removeValue();
	void display();
	singleLink_list() {
		start = NULL;
	}
};

int main() {
singleLink_list list;
start = NULL;

list.addNewValue();
list.addNewValue();
list.display();
list.removeValue();
list.display();
list.search();
cout << endl;
}


node *singleLink_list::create_node(int value) {
	struct node *temp, *s;
	temp = new(struct node);
	if(temp == NULL) {
		cout << "List is empty" << endl;
		return 0;
	}
	else {
		temp -> info = value;
		temp -> next = NULL;
		return temp;
	}
}

void singleLink_list::addNewValue() {
	int value;
	cout << "Enter value to be inserted" << endl;
	cin >> value;
	struct node *temp, *p;
	temp = create_node(value);
	if(start == NULL) {
		start = temp;
		start -> next = NULL;
	}
	else {
		p = start;
		start = temp;
		start -> next = p;
	}
	cout << "Element inserted at beggining" << endl;
}

void singleLink_list::display() {
	struct node *temp;
	if(start == NULL) {
		cout << "The list is empty" << endl;
		return;
	}
	temp = start;
	cout << "Elements of list are: " << endl;
	while (temp != NULL) {
		cout << temp -> info << "->";
		temp = temp -> next;
	}
	cout << "NULL" << endl;
}

void singleLink_list::search() {
	int value, pos = 0;
	bool flag = false;
	if(start == NULL) {
		cout << "List is empty" << endl;
		return;
	}
	cout << "Enter value to search for: " << endl;
	cin >> value;
	struct node *s;
	s = start;
	while(s != NULL) {
		pos++;
		if (s->info == value) {
			flag = true;
			cout << "Element " << value << " is found at position " << pos << endl;
		}
		s = s->next;
	}
	if (!flag) {
		cout << "Element " << value << " not found in the list" << endl;
	}
}

void singleLink_list::removeValue()
{
    int pos, i, counter = 0;
    if (start == NULL)
    {
        cout<<"List is empty"<<endl;
        return;
    }
    cout<<"Enter the position of value to be deleted: ";
    cin>>pos;
    struct node *s, *ptr;
    s = start;
    if (pos == 1)
    {
        start = s->next;
    }
    else
    {
        while (s != NULL)
        {
            s = s->next;
            counter++;  
        }
        if (pos > 0 && pos <= counter)
        {
            s = start;
            for (i = 1;i < pos;i++)
            {
                ptr = s;
                s = s->next;
            }
            ptr->next = s->next;
        }
        else
        {
            cout<<"Position out of range"<<endl;
        }
        free(s);
        cout<<"Element Deleted"<<endl;
    }
}
