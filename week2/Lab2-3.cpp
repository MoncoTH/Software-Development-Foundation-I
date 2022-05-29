/* LANG : C++ */ 
#include <iostream>

using namespace std;

int main()
{
	int  a , b , c , d , num;
	cin>> num;
	a=num/1000%10;
	b=num/100%10;
	c=num/10%10;
	d=num/1%10;
	num=a+b+c+d;
	cout<< a << "+"<< b << "+" << c << "+" << d << "=" << num;
	
	return 0;
}
