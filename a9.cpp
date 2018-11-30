#include <bits/stdc++.h>

using namespace std;

class Education
{
	protected:
	string HighQual;
	public:
	Education(string hq)
	{
		HighQual = hq;
	}
	
	void show()
	{
		cout << "Highest Qualification : " << HighQual << endl;
	}
};

class Staff
{
	protected:
	int code;
	string Name;
	public:
	Staff(int c,string n)
	{
		code = c;
		Name = n;
	}
	
	void show()
	{
		cout << "Name : " << Name << endl;
		cout << "Code : " << code << endl;
	}
};

class Officer: public Education, public Staff
{
	char Grade;
	public:
	Officer(string hq,int c,string n,char g): Education(hq),Staff(c,n)
	{
		Grade = g;
	}
	void show()
	{
		cout << "Highest Qualification : " << HighQual << endl;
		cout << "Code : " << code << endl;
		cout << "Name : " << Name << endl;
		cout << "Grade : " << Grade << endl;
	}
};

class Teacher: public Education, public Staff
{
	string subject,publication;
	public:
	Teacher(string hq,int c,string n,string sub, string pub): Education(hq),Staff(c,n)
	{
		subject = sub;
		publication = pub;
	}
	void show()
	{
		cout << "Highest Qualification : " << HighQual << endl;
		cout << "Code : " << code << endl;
		cout << "Name : " << Name << endl;
		cout << "Subject : " << subject << endl;
		cout << "Publication : " << publication << endl;
	}
};
class Typist: public Staff 
{
	public:
	int speed;
	Typist(int c, string n,int s):Staff(c,n)
	{
		speed = s;
	}
	void show()
	{
		cout << "Name : " << Name << endl;
		cout << "Code : " << code << endl;
		cout << "Speed : " << speed << endl;
	}
};

class Regular: public Typist
{
	double salary;
	public:
	Regular(int c, string n,int s,double sal):Typist(c,n,s)
	{
		salary = sal;
	}
	void show()
	{
		cout << "Name : " << Name << endl;
		cout << "Code : " << code << endl;
		cout << "Speed : " << speed << endl;
		cout << "Salary : " << salary << endl;
	}
};

class Casual : public Typist
{
	double wage;
	public:
	Casual(int c, string n,int s,double w): Typist(c,n,s)
	{
		wage = w;
	}
	void show()
	{
		cout << "Name : " << Name << endl;
		cout << "Code : " << code << endl;
		cout << "Speed : " << speed << endl;
		cout << "Wage : " << wage << endl;
	}
};

int main(void)
{
	Officer o("MBA",112,"Samar Singh",'A');
	o.show();
	Teacher t("M.Sc.",323,"Sunil","Physics","KYK Publication");
	t.show();
	Regular r(543,"Rohit",68,10372.34);
	r.show();
	Casual c(835,"Kunal",95,456);
	c.show();
}