#include<iostream>
using namespace std;
class Shape
{
public:
	Shape(){}
	virtual void display()
	{
		//will be overridden
	}
	virtual void area()
	{
		//will be overridden
	}
};
class Circle: public Shape
{
public:
	double r;
	Circle(){}
	Circle(double r)
	{
		this->r=r;
	}
	void display()
	{
		cout<<"Shape  : Circle"<<endl;
	}
	void area()
	{
		cout<<"area ="<<3.14*r*r<<endl;
	}
};
class Rectangle: public Shape
{
public:
	double l,b;
	Rectangle(){}
	Rectangle(double l,double b)
	{
		this->l=l;
		this->b=b;
	}
	void display()
	{
		cout<<"Shape  : Rectangle"<<endl;
	}
	void area()
	{
		cout<<"area ="<<l*b<<endl;
	}
};
class Trapezoid: public Shape
{
public:
	double a,b,h;
	Trapezoid(){}
	Trapezoid(double a,double b,double h)
	{
		this->a=a;
		this->b=b;
		this->h=h;
	}
	void display()
	{
		cout<<"Shape  : Trapezoid"<<endl;
	}
	void area()
	{
		cout<<"area ="<<((a+b)/2)*h<<endl;
	}
};
int main()
{
	Shape *obj;

	Circle obj1(4.5);
	obj=&obj1;
	obj->display();
	obj->area();

	Rectangle obj2(2.0,4.0);
	obj=&obj2;
	obj->display();
	obj->area();

	Trapezoid obj3(2.0,3.0,4.0);
	obj=&obj3;
	obj->display();
	obj->area();


}