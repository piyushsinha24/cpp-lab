#include<iostream>
#include<math.h>
using namespace std;
class polar
{
	public:
		float r,th;
		polar(){}
		polar(int a,int b)
		{
			r=a;
			th=b;
		}
		void show()
		{
			cout<<"In polar form:\nr="<<r<<" and theta="<<th;
			
		}
};
class rectangular
{
	float x,y;
	public:
		rectangular(){}
		rectangular(polar p)
		{
			x=p.r*cos(p.th);
			y=p.r*sin(p.th);
		}
		void show()
		{
			cout<<"\nIn Rectangular form:\nx="<<x<<"and y="<<y;
			
		}
};
int main()
{
	polar p(5.5,3.14/2);
	p.show();
	rectangular r;
	r=p;
	r.show();
	
}
