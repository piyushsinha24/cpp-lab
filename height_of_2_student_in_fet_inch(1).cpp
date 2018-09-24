#include<iostream>
using namespace std;

class height{
  double feet,inches;
  double cm;
  public:
     double into_cm(){
        inches=(feet*12)+inches;
        cm=(inches*2.54);
        return cm;
     }   
     double operator -(height c){
       cm=cm-c.cm;
       return cm;
     }
     void getdata(){
       cout<<"Enter height in feet and inches:"<<endl;
       cin>>feet>>inches;
     }
};
int main(){
  height h1,h2;
  h1.getdata();
  h1.into_cm();
  h2.getdata();
  h2.into_cm();        
  double c=(h1-h2);
  cout<<"The difference is:"<<c;
  return 0;
}  
