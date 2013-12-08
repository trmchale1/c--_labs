#include <iostream>
using namespace std;
int main ()
{
	string str1, str2, str3, str4;
	
	str1 = "lettuce";
	str2 = "tomato";
	str3 = "ketchup";
	
	int x = str1.length();
	
	cout << x << endl;
	
	int y = str2.find('a', 0);
	
	int z = str2.find('t', 3);
	
	int a = str2.find("z", 0);
	
	string b = str2.insert(3, "aaa");
	
	cout << endl;
	
	str2.erase(1, 5);
	
	str2.erase(2, 1);	
	
	cout << y << endl;
	
	cout << z << endl;
	
	cout << a << endl;
	
	cout << endl;
	
	cout << b << endl;
	
	cout << str2 << endl;
	
	cout << endl;
	
	cout << endl;
	
	string i = str3.substr(2,3);
	
	cout << i << endl;
	
	cout << endl;
	
	cout << str1 << endl;
	
	string g = str1.replace(1, 6, "uck");
	
	cout << g << endl;
	
	
}