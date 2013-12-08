#include <iostream>
#include <fstream>
void laozi(int, int []);
using namespace std;
ifstream infile ("lab18in.txt");
ofstream outfile ("lab18out.txt");
int main()
{
	int n = 3;
	int x;
	int y[n];
	
	cout << "This is in the main program" << endl;
	
	for (x = 0; x < n; x++)
	{ 
		infile >> y[x];
	}
	
	for (x = 0; x < n; x++)
	{
		cout << y[x] << endl;
	}
	
	laozi(n, y);
	
	cout << "After the call " << endl;
	
	for (x = 0; x < y[x]; x ++)
	{
	cout << y[x] << endl;
	}
	
	cout << n << endl;
	
	cout << endl;

}
	void laozi(int a, int b[])
{
	
	
	for (int x = 0; x < a; x++)
	{
		b[x] = b[x] + 10;
		
		cout << b[x] << endl;
	}
	
	a = a + 1;
}