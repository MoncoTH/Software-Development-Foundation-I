/* LANG:C++ */
#include <iostream>
using namespace std;
int main()
{
	int THB;
	float USD = 0.0301, JPY = 3.3713, EUR = 0.0256, GBP = 0.0224, CNY = 0.1998;

	cin >> THB;
	cout << USD * THB << " USD" <<endl;
	cout << JPY * THB << " JPY" <<endl;
	cout << EUR * THB << " EUR" <<endl;
	cout << GBP * THB << " GBP" <<endl;
	cout << CNY * THB << " CNY" <<endl;
    return 0;
}
