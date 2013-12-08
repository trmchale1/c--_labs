#include <iostream>
#include <fstream>
using namespace std;
ifstream infile ("lab19in.txt");
int main()
{
	string str1 = "yesterday";
	
	cout << str1 << endl;
	
	string str2, str3, str4, str5;
	
	str2 = "tomorrow";
	
	cout << str2 << endl;
	
	cout << "Gimme 3 " << endl;
	
	cin >> str3;
	
	cout << str3 << endl;
	
	getline(infile, str4);
	
	cout << str4 << endl;
	
	str5 = str2 + str3;
	
	cout << str5 << endl;
	
	str4[0] = 'b';
	str4[3] = 'g';
	
	cout << str4 << endl;
	
	for (int x = 0; x < 6; x++)
	{
		cout << str4[x] << endl;
	} 
}

