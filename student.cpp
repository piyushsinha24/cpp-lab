#include<bits/stdc++.h>
using namespace std;
struct student {
   char  name[50];
	int roll;
    int sub1;
	int sub2;
	float percent;
} s[10];  

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
	cout<<"Enter a name";
	cin>>s[i].name;
	cout<<"Enter a roll";
	cin>>s[i].roll;
	cout<<"Enter subject marks";
	cin>>s[i].sub1;
	cin>>s[i].sub2;
	s[i].percent=(s[i].sub1+s[i].sub2)/2;
}
	//
		cout<<setw(49)<<"student table \n";
		
		cout<<setw(15)<<"Name"<<setw(15)<<"Roll"<<setw(12)<<"sub1"
     	<<setw(20)<<"sub2"<<setw(20)<<"percentage\n";
		
	for(i=0;i<3;i++)
	{
	cout<<setw(15)<<s[i].name<<setw(15)<<s[i].roll<<setw(12)<<s[i].sub1
     <<setw(20)<<s[i].sub2<<setw(20)<<s[i].percent<<endl;
}

cout<<endl<<endl<<endl;
	
}
