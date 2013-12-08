#include <iostream>
#include <fstream>
using namespace std;
ifstream infile("lab14in.txt");
ofstream outfile ("lab14out.txt");
int main()

{
    int x, y;
    infile >> x;
    infile >> y;
    
    outfile << "This is x " << x << endl;
    outfile << "This is y " << y << endl;

    outfile.close();
    infile.close();
}

