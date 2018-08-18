#include<iostream>
using namespace std;
class Add
{
    public:
    void add(int a,int b)
    {
        cout<<"Sum of two integers :"<<a+b<<"\n";
    }
    void add(int a,float b,float c)
    {
        cout<<"Sum of two floats and one integer :"<<float(a+b+c)<<"\n";
    }
    void add(int areal,int aimg,int breal,int bimg)
    {
       int real = areal + breal;
       int img = aimg + bimg;
       if (img >= 0)
        cout << "Sum of two complex numbers = " << real << " + " << img << "i"<<"\n";
       else
        cout << "Sum of two complex numbers = " << real << " " << img << "i"<<"\n";
    }

};
int main()
{
    Add obj;
    obj.add(2,5);
    obj.add(3,4.0,2.0);
    obj.add(2,4,3,6);
}
