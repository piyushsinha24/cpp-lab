#include<iostream>
using namespace std;
class Patient;
class Doctor
{
	string doc_name[10];
	int id[10];
	string branch[10];
	public:
	void getData()
	{
		cout<<"Doctor's Database \n";
		for(int i=0;i<5;i++)
		{
			cout<<"Enter Doctor's name :";
			cin>>doc_name[i];
			cout<<"Enter id :";
			cin>>id[i];
			cout<<"Speciality :";
			cin>>branch[i];
		}
	}
	friend void assign(Doctor,Patient);
	
};
class Patient
{
	string pat_name[10];
	int id[10];
	string disease[10];
	public:
	void getData()
	{
		cout<<"Patient's Database \n";
		for(int i=0;i<5;i++)
		{
			cout<<"Enter patient's name :";
			cin>>pat_name[i];
			cout<<"Enter id :";
			cin>>id[i];
			cout<<"Disease :";
			cin>>disease[i];
		}
	}
	friend void assign(Doctor,Patient);
	
};
void assign(Doctor d,Patient p)
{
	int x,y;
	cout<<"Enter patient's Id :";
	cin>>x;
	cout<<"Hello Mr./Ms. "<<p.pat_name[x]<<"\n";
	for(int i=0;i<5;i++)
	{
		if(p.disease[x] == d.branch[i])
		{
			y=i;
			break;
		}
	}	
	cout<<"Doctor "<<d.doc_name[y]<<"can help you.";

}
int main()
{
	Doctor obj1;
	Patient obj2;
	obj1.getData();
	obj2.getData();
	assign(obj1,obj2);
}

