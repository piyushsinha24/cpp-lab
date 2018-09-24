#include<iostream>
using namespace std;
class compare_complex
{
	public:
	int real,img;
	compare_complex(int r,int i)
	{
		real =r;
		img=i;
	}
	bool operator==(compare_complex obj)
	{
		return(real==obj.real && img==obj.img);
	}
};
int main()
{
	compare_complex a(2,3);
	compare_complex b(4,3);
	cout<<(a==b);
	return 0;
}
