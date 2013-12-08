#include <iostream>
#include <fstream>
using namespace std;
int func (int, int []);
ifstream infile("lab16in.txt");
ofstream outfile("lab16out.txt");
int main ()
{
    int n, y;
	n = 4;
	int data[n];

	
	for (int x = 0; x <= n; x++)
	{
		infile >> data[x];
        
	}
	
	y = func(n, data);
	
	outfile << y << endl;
	
	outfile.close();
	infile.close();
}
int func (int n, int data[])
{
    n = 3;
	int x = data[0] + data [1] + data [2] + data [3] + data[4];

    return x;
}