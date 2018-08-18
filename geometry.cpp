#include<iostream>
using namespace std;
class square
{
	public :
	float area,s;
	void userInput()
	{
		cout<<"enter side\n";
		cin>>s;
	}
	void calArea()
	{
		area=s*s;
	}
	
	void display()
	{
		cout<<"area ="<<area<<"\n";
		
	}
};
class triangle
{
	public :
	float area,h,b;
	void userInput()
	{
		cout<<"enter height\n";
		cin>>h;
		cout<<"enter base\n";
		cin>>b;
	}
	void calArea()
	{
		area=0.5*b*h;
	}
	
	void display()
	{
		cout<<"area ="<<area<<"\n";

	}
};
class rectangle
{
	public :
	float area,l,b;
	void userInput()
	{
		cout<<"enter length\n";
		cin>>l;
		cout<<"enter breadth\n";
		cin>>b;
	}
	void calArea()
	{
		area=l*b;
	}
	
	void display()
	{
		cout<<"area ="<<area<<"\n";
		
	}
};
	int main()
	{
		square obj;
		obj.userInput();
		obj.calArea();
		obj.display();
		rectangle obj1;
		obj1.userInput();
		obj1.calArea();
		obj1.display();
		triangle obj2;
		obj2.userInput();
		obj2.calArea();
		obj2.display();
	}

