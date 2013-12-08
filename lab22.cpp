#include <iostream>
using namespace std;
int main ()
{
	int x;
	
	string str, rec, y;
	
	str = "cheese";
	rec = "buddah";
	
	x = rec.length();
	
	cout << x << endl;
	
	y = rec.substr(0, 4);
	
	str.replace(0, 4, y);
	
	cout << str << endl;	
	
	string::size_type pos;
	
	pos = rec.find("ju", 0);
	
	if (pos != string::npos)
	cout << "We found it!" << endl;
	
	else
	cout << "Not Found" << endl;
	
	getline(cin, rec);
	
	cout << "Rec is now ... " << rec << endl;
	
	cout << "New input for rec" << endl;
	cin >> rec;
	
	cout << "Rec is now " << rec << endl;
	
	cout << endl;
	
	cout << rec << endl;
	
	cout << str << endl;
	
	str.erase(0, 2);
	
	
	
	cout << endl;
	
		
}