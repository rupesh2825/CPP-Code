
#include <iostream>
using namespace std;
const int MAX=10;

class Queue
{
	int data[MAX];
	int front,rear;

	public:
	Queue()
	{
		front=rear=-1;
	}
	void enqueue(int);
	void dequeue();
	void show();
	int isFull();
	int isEmpty();

};

int Queue::isFull()
{
	if(rear==MAX-1)
		return 1;
	else
		return 0;
}

int Queue::isEmpty()
{
	if(rear==-1||front==rear+1)
		return 1;
	else
		return 0;
}

void Queue::enqueue(int ele)
{
	if(isFull())
	{
	cout<<"\nCan't add ! Queue is Full !";
	}
	else
	{
		if(rear==-1)
		{
			front++;
			data[++rear]=ele;
			cout<<"\nElement added successfully !";
		}
		else
		{
			data[++rear]=ele;
			cout<<"\nElement added successfully !";

		}
	}
}

void Queue::dequeue()
{
	int ele;
	if(isEmpty())
	{
		cout<<"\ncan't delete ! Queue is Empty 1";
	}
	else
	{
		ele=data[front];
		front++;
		cout<<"\nElement removed successfully !";

	}
}
void Queue::show()
{
	if(isEmpty())
	{
		cout<<"Queue is Empty !";
	}
	else
	{
		for(int i=front;i<=rear;i++)
			cout<<data[i]<<"";

	}
}

int main()
{
	int ch,ele;
	Queue q;
	cout<<"\n------------------"
			"Queue Menu---------";
	cout<<"\n1. Add Element";
	cout<<"\n2. Remove Element";
	cout<<"\n3. Display Element";
	cout<<"\n4. Exit";

	do
	{
		cout<<"\n--------------------------------------";
		cout<<"\nEnter you choice : ";

		cin>>ch;

		cout<<"\n----------------------------------------";

	switch(ch)
	{
	case 1:

		cout<<"\nEnter element :: ";
		cin>>ele;
		q.enqueue(ele);
		break;


	case 2:
		cout<<"\nEnter element :: ";
		cin>>ele;
		q.dequeue();
		break;



	case 3:
		cout<<"\n Element in Queue :: ";

		q.show();
	}


	}while(ch!=4);


}

