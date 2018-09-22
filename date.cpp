#include<iostream>
using namespace std;
class date
{
	public :
	int d,m,y;
	date(int d,int m,int y)
	{
		this->d=d;
		this->m=m;
		this->y=y;
	}
	int valid()
	{
		if(d>31 || d<1 || m>12 || m<1 || y<1)
			return 0;
		if(m==2)
		{
		
			if((y%400==0||y%100!=0)&&(y%4==0))//leapYear
			{
				if(d<29)
					return 1;
				else
					 return 0;
			}
			else
			{
				if(d<28)
					return 1;
				else 
					return 0;
			}
		}
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		{
			if(d<31)
				return 1;
			else
				return 0;
		}
		else return 1;
		
		
	}
};
int main()
{
	date obj(29,02,2014);
	int res=obj.valid();
	if(res==1)
		cout<<"valid";
	else
		cout<<"invalid";
}

