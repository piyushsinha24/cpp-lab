#include<iostream>
#define MAX 5
using namespace std;
class stack
{
	private:
	static int top;
	public:
	int a[MAX];
	void push(int x)
	{
		if(top>=MAX-1)
			cout<<"Stack overflow";
		else
			a[++top]=x;
	}
	int pop()
	{
		if(top<0)
			cout<<"stack underflow";
		else
		{
			int x=a[top--];
			return x;
		}
	}
	void display()
	{
		int i;
		for(i=top;i>=0;i--)
			cout<<a[i]<<"\t";
	}
};
int stack::top=-1;
int main()
{
	stack s;
	int n,i,x,pos;
	while(1)
	{
		cout<<"\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT \n ENTER YOUR CHOICE :\n	";
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Enter element to be pushed";
				cin>>x;
				s.push(x);
				break;
			case 2:
				pos=s.pop();
				cout<<"Element popped :"<<pos;
				break;
			case 3:
				s.display();
				break;
			case 4:
				exit (0);
				break;
			default:
				cout<<"Invalid choice";
		}
		
	}
	return 0;
}
