#include <iostream>
using namespace std;
const int MAX=5;

class order
{
	int order_id;
	char orderer_name[10];

public:
	void acceptorder()
	{
		cout<<"\nEnter the order id : ";
		cin>>order_id;
		cout<<"\nEnter the orderer Name : ";
		cin>>orderer_name;
	}

	void displayorder()
	{
		cout<<"\n\t"<<order_id<<"\t\t"<<orderer_name;
	}

	friend class Queue;

};

class Queue
{
	order data[MAX];
	int front, rear;

public:
	Queue()
	{
		front=rear=-1;
	}
	void enqueue();
	void dequeue();
	int isFull();
	int isEmpty();
	void display();
};

int Queue::isFull()
{
	if((front== 0 && rear ==MAX -1)||(front == rear +1))
		return 1;
	else
		return 0;
}

int Queue::isEmpty()
{
	if(front== -1 && rear == -1)
		return 1;
	else
		return 0;
}

void Queue::enqueue()
{
    int ele;
	if(isFull())
	{
		cout<<"\nCan't place order ! Queue is full !";
	}
	else
	{
		order temp;
		temp.acceptorder();
		if(rear==MAX-1 && front !=0)
		{
			rear= -1;
		}
		data[++rear]=temp;
		cout<<"\norder placed successfully";
		if(front== -1)
			front = 0;
	}
}

void Queue::dequeue()
{
	if(isEmpty())
	{
		cout<<"\nNO orders to serve ! ";
	}
	else
	{
		order temp;
		temp=data[front];
		front++;
		cout<<"\nOrder served Successfully ! ";
		if(front==MAX)
			front= 0;
		if(front-1==rear)
			front = rear = -1;
	}
}

void Queue::display()
{
	if(isEmpty())
	{
		cout<<"\nNO orders to display !";
	}
	else
	{
		int i=front;
		cout<<"\n\t----------------order in Queue--------------------";

		cout<<"\n\n\torder ID\tOrderer Name";
		cout<<"\n\t--------------------------------------------------";

		if(front <= rear)
		{
			while(i <=rear)
			{
				data[i].displayorder();
				i++;
			}
		}
		else
		{
			while(i<MAX)
			{
				data[i].displayorder();
				i++;
			}
			i=0;
			while(i<=rear)
			{
				data[i].displayorder();
				i++;
			}
		}
	}
}

int main() {
	int ch;

	Queue q;

	cout<<"\n----------------------Pizza porlor Menu----------------------------";
	cout<<"\n1.Place order";
	cout<<"\n2.serve order";
	cout<<"\n3.display order";
	cout<<"\n4.Exit";

	do
	{
		cout<<"\n------------------------------------------------------";
		cout<<"\nEnter the choose";
		ch=4;
		cin>>ch;
		cout<<"\n------------------------------------------------------";

		switch(ch)
		{
			case 1:
			q.enqueue();
			break;

			case 2:
			q.dequeue();
			break;

			case 3:
			q.display();
			break;
		}
	}while(ch!=4);

	return 0;
}



