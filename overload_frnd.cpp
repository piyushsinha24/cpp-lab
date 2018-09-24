#include <bits/stdc++.h>
using namespace std;

class complex1{
	private:
	float real, img;
	
	public:
	complex1(float r, float i){
		real = r;
		img = i;
	}
	complex1(){
		img = 0; 
		real = 0;
	}
	
	friend complex1 operator+(complex1 a, complex1 b);
	friend complex1 operator-(complex1 a, complex1 b);
	friend complex1 operator*(complex1 a, complex1 b);
	
	void show(){
		if(img < 0)
			cout << real << " - " << img << "i\n";
		else
			cout << real << " + " << img << "i\n";
	}
};

complex1 operator*(complex1 a, complex1 b){
	complex1 tmp;
	tmp.real = (a.real * b.real) - (a.img * b.img);
	tmp.img = (a.real * b.img) + (a.img * b.real);
	return tmp;
}

complex1 operator-(complex1 a, complex1 b){
	complex1 tmp;
	tmp.real = a.real - b.real;
	tmp.img = a.img - b.img;
	return tmp;
}

complex1 operator+(complex1 a, complex1 b){
	complex1 tmp;
	tmp.real = a.real + b.real;
	tmp.img = a.img + b.img;
	return tmp;
}
	
int main(){
	complex1 a(2, 5);
	complex1 b(2, 3);
	complex1 c(1, 2);
	complex1 d(4, 8);
	complex1 ans = a - b * c + d;
	ans.show();
	return 0;
}
