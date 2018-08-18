#include<iostream>
using namespace std;
class DB;
class DM
{
	double m,cm;
	public :
	void getData()
	{
		cout<<"Enter the distance in Metre-Centimeter scale\n";
		cout<<"Metre :";
		cin>>m;
		cout<<"Centimeter :";
		cin>>cm;
	}
	friend void add(DM,DB);	
};
class DB
{
	public:
	double f,i;
	void getData()
	{
		cout<<"Enter the distance in Feet-Inches scale\n";
		cout<<"Feet :";
		cin>>f;
		cout<<"Inches :";
		cin>>i;
	}
	friend void add(DM,DB);	
};
void add(DM a ,DB b)
{
	double m_inches=39.3701*a.m;
	double cm_inches=0.393701*a.cm;
	double f_inches=12*b.f;
	double inches=b.i;
	double total_inches=m_inches+cm_inches+f_inches+inches;	
	double foot=int(total_inches/12);
	double in=total_inches-(12*foot);
	cout<<"Foot :"<<foot;
	cout<<"inches :"<<in;
}
int main()
{
	DM obj1;
	obj1.getData();
	DB obj2;
	obj2.getData();
	add(obj1,obj2);
	
}

