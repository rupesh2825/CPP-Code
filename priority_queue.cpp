#include <iostream>
#include<string>
using namespace std;
string Q[10];
int pr[10];
int r=-1,f=-1,n;

void enqueue(string data,int p)
{
	int i;
	if((f==0)&&(r==n-1))
	{
		cout<<"Queue is empty";

	}
	else
	{
		if(f==-1)
		{
			f=r=0;
			Q[r]=data;
			pr[r]=p;
		}
		else
		{
			for(i=r;i>=f;i--)
			{
			if(p>pr[i])
			{
				Q[i+1]=Q[i];
				pr[i+1]=pr[i];
			}
			else break;
		}
		Q[i+1]=data;
		pr[i+1]=p;
		r++;
		}
	}
}

void print()
{
	int i;
	for(i=f;i<r;i++)
	{
		cout<<"patient's Name - "<<Q[i];

		switch(pr[i])
		{
		case 1:
			cout<<"Priority -'Checkup'"<<endl;
			break;

		case 2:
			cout<<"priority -'Non-serious'"<<endl;
			break;

		case 3:
			cout<<"priority -'serious'"<<endl;
			break;

		default:
			cout<<"priority not found"<<endl;
		}
	}
}

void dequeue()
{
	if(f==-1)
	{
		cout<<"Queue is Empty";
	}
	else
	{
		cout<<"deleted Element ="<<Q[f]<<endl;
		cout<<"its priority ="<<pr[f]<<endl;
		if(f==r)
			f=r=-1;
		else
			f++;
	}
}

int main()
{
	string data;
	int opt,i,p;
	cout<<"Enter your choice :"<<endl;
	do
	{
		cout<<"1 for insert the data in queue"<<endl;
		cout<<"2 for show the data in Queue"<<endl;
		cout<<"3 for Delete the data from the queue"<<endl;
		cout<<"0 for EXIT"<<endl;
		cin>>opt;

		switch(opt)
		{
		case 1:
			cout<<"Enter the number of patinent"<<endl;
			cin>>n;
			i=0;
			for(i=0;i<n;i++)
			{
				cout<<"Enter your name of the patient:";
				cin>>data;
				cout<<"Enter your prioritys(3:serious,2:non-serious,1:genral checkup):";
				cin>>p;
				enqueue(data,p);
				break;

		case 2:
			print();
			break;

		case 3:
			dequeue();
			break;


			}
		}
	}while(opt!=0);
	return 0;
}

