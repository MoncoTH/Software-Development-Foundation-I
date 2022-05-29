/* LANG:C++ */
#include <iostream>
using namespace std;
int main()
{
	int height;
	cin >> height;
	if(height < 150)
	{
		cout << "Dwarf";
	}
	else if(height > 150 && height < 164.99)
	{
		cout << "Standard Height";
	}
	else if(height > 165 && height < 189.99)
	{
		cout << "Taller";
	}
	else
	{
		cout << "Abnormal Height";
	}
	return 0;	
}
