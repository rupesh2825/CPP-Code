#include <iostream>
#include<string.h>
#define max 10
using namespace std;

class stack
{
public:
	int top;
	char stk[10];
	stack()
	{
		top=-1;
	}

	int empty()
	{
		if(top==-1)
			return(1);
		else
			return(0);
	}

	int full()
	{
		if(top==max-1)
			return(1);
		else
			return(0);
	}

	void push(char ch)
	{
		if(full())
		{
			cout<<"\nstack is overflow";
		}
		else
		{
			top=top+1;
			stk[top]=ch;
		}
	}

	char pop()
	{
		char ch;
		if(empty())
		{
			cout<<"\nstack is empty";
			return -1;
		}
		else
		{
			ch=stk[top--];
			return ch;
		}
	}
};


int main() {
	 stack s;
	 int k=0;
	 int flag;
	 char str[10],rev[10],ch;

	 cout<<"Enter STRING";
	 cin>>str;

	 for(int i=0;str[i]!='\0';i++)
	 {
		 ch=str[i];
		 s.push(ch);

	 }

	 while(s.top!=-1)
	 {
		 ch=s.pop();
		 rev[k++]=ch;
	 }
	 rev[k]='\0';
	 cout<<"Reverse string is=="<<rev<<endl;

	 for(int i=0;str[i]!='\0';i++)
	 {
		 if(str[i]==rev[i])
		 {
			 flag=1;
		 }
		 else
		 {
			 flag=0;
			 break;
		 }
	 }

	 if(flag==0)
	 {
		 cout<<"stack is not Palindrome";
	 }
	 else
	 {
		 cout<<"stack is Palindrome";
	 }
	return 0;
}

