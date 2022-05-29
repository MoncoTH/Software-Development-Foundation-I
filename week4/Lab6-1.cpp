/* LANG : C++ */
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	
	char ch,mychar;
	int count=0;
	
	cin >> mychar;
	
	while(ch != mychar){
		cin >> ch;
		count++;
	}
	
	cout << count;
	return 0;
}
