#include <iostream>
#include <fstream>
void buddah (int &, double &);
using namespace std;
ifstream infile("lab17in.txt");
ofstream outfile("lab17out.txt");
int main()
{
	int x, z;
	double y;
	
	infile >> x;
	infile >> y;
	
	buddah(x,y);

	outfile << x << endl;
	outfile << y << endl;    
    
	
	outfile.close();
	infile.close();
	
}
void buddah (int &x, double &y)
{
x = x + 1;
y = y + 1;
}