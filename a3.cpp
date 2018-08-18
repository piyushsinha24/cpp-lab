#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
    private:double base,height;
    public:
    Triangle()
    {
        this->base=5.0;
        this->height=4.0;
    }
    void hypot()
    {
        cout<<"Hypotenuse :"<<sqrt(base*base+height*height);
    }
    void area()
    {
        cout<<"Area :"<<0.5*base*height;
    }
};
int main()
{
    Triangle obj;
    obj.hypot();
    obj.area();
}
