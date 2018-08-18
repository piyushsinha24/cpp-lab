#include<iostream>
using namespace std;
class Rectangle
{
    public :
    double l,b;
    Rectangle(double l,double b)//parameterized
    {
        this->l=l;
        this->b=b;
    }
    Rectangle(const Rectangle &obj2)//copy constructor
    {
         this->l=5;
         this->b=4;
    }
   
    void area()
    {
        cout<<"area: "<<l*b;
    }
    
};
int main()
{
    Rectangle obj(10.0,2.2);
    obj.area();
    Rectangle obj2=obj;
    obj2.area();
    
   
}

