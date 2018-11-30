#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
	Person(int p)
	{
		cout<<"Person"<<p<<endl;
	}

};
class Employee:virtual public Person
{
public:
	Employee(int e,int p):Person(p)
	{
		cout<<"Employee"<<e<<endl;
	}

};
class Student:virtual public Person
{
public:
	Student(int s,int p):Person(p)
	{
		cout<<"Student"<<s<<endl;
	}

};
class Manager:public Employee,public Student
{
public:
	Manager(int m,int s,int e,int p):Person(p),Student(s,p),Employee(e,p)
	{
		cout<<"Manager"<<m<<endl;
	}

};
int main()
{
	Manager m(1,2,3,4);
}