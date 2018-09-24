#include <bits/stdc++.h>
using namespace std;

class fahrenheit
{
	float f;
	
	public:
	void get()
	{
		cin >> f;
	}
	float toCelcius()
	{
		return (((f-32) / 9)*5);
	}
};

class celcius
{
	float c;
	
	public:
	void get()
	{
		cin >> c;
	}
	float toFahrenheit()
	{
		return (((c/5)*9) + 32);
	}
};

int main()
{
	fahrenheit f1;
	celcius c1;
	cout << "Enter the temperature in Fahrenheit : ";
	f1.get();
	cout << "The equivalent temperature in Celcius = " << f1.toCelcius() << "\n";
	cout << "Enter the temperature in Celcius : ";
	c1.get();
	cout << "The equivalent temperature in Fahrenheit = " << c1.toFahrenheit() << "\n";
	return 0;
}
