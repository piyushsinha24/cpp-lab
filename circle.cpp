#include<iostream>
using namespace std;
class circle
{
	public :
	float area,perimeter,r;
	void userInput()
	{
		cout<<"enter radius\n";
		cin>>r;
	}
	void calArea()
	{
		area=3.14*r*r;
	}
	void calPerimeter()
	{
		perimeter=2*3.14*r;
	}
	void display()
	{
		cout<<"area ="<<area<<"\n";
		cout<<"perimeter ="<<perimeter<<"\n";
	}
};
	int main()
	{
		circle obj;
		obj.userInput();
		obj.calArea();
		obj.calPerimeter();
		obj.display();
	}

