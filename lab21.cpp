#include <iostream>
using namespace std;
string uno (string);
void dos (string, string &);
int main ()
{
	string str1, str2, str3, str4;
	
	str1 = "buddah";
	str3 = "confucious";
	
	cout << str1<< endl;
	cout << str3 << endl;
	
	str2 = uno(str1);
	
	cout << str1 << endl;
	
	cout << str2 << endl;
	
	dos(str1, str3);
	
	cout << str2 << endl;
	
	cout << str1 << endl;
	
	cout << str3 << endl;
		
}
	string uno (string x)
{
	string bang = "TM";
	x = x + bang;
	
	return x;	
}
	void dos (string x, string &y)
{
	x = x + "xyz";
	
	cout << x << endl;
	
	y = y + "xyz";
	
	cout << y << endl;
}