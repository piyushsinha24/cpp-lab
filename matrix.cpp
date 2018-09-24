#include <iostream>
using namespace std;

class matrix
{
	private:
	int r, c, **a;
	
	public:
	matrix(){this -> r = 0; this -> c = 0;}
	
	matrix(int r, int c)
	{
		this -> r = r;
		this -> c = c;
	}
	
	void input()
	{
		a = new int*[r];
		for(int i = 0; i < r; ++i)
		{
			a[i] = new int[c];
			for(int j = 0; j < c; ++j)
			{	
				cin >> a[i][j]; 
			}
		}
	}
	
	void disp()
	{
		for(int i = 0; i < r; ++i)
		{
			for(int j = 0; j < c; ++j)
			{	
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	void add(matrix m)
	{
		for(int i = 0; i < r; ++i)
		{
			for(int j = 0; j < c; ++j)
			{	
				this -> a[i][j] += m.a[i][j]; 
			}
		}
	}
	
	void mult(matrix b)
	{
		int sum = 0, p = b.r, q = b.c, m = this -> r, n = this -> c, d[m][q];
		if(n == p)
		{
			for(int i = 0; i < m; ++i)
			{
				for(int j = 0; j < q; ++j)
				{
					for(int k = 0; k < p; ++k)
					{
						sum += (a[i][k] * b.a[k][j]);
					}
					d[i][j] = sum;
					sum = 0;
				}
			}
			for(int i = 0; i < r; ++i)
			{
				for(int j = 0; j < c; ++j)
				{	
					cout << d[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "\n";
		}
		else
			cout << "Matrix multiplication not possible\n";
	}
};

int main()
{
	int r, c;
	cout << "enter the rlimit and climit of 1st matrix: ";
	cin >> r >> c;
	matrix a(2, 2);
	cout << "enter the rlimit and climit of 2nd matrix: ";
	cin >> r >> c;
	matrix b(2, 2);
	cout << "Enter the first matrix :\n";
	a.input();
	cout << "1st matrix :\n";
	a.disp();
	cout << "Enter the second matrix\n:";
	b.input();
	cout << "2nd matrix :\n";
	b.disp();
	cout << "sum : \n";
	a.add(b);
	a.disp();
	cout << "product : \n";
	a.mult(b);
	return 0;
}
