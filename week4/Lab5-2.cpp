/* LANG : C++ */
#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n,x,i,sum=0,max=-1; 
	
	cin >> n;
	for(i=1; i<=n; i++){
		cin >> x;
		sum=sum+x; 
		
		if(max<x){
			max=x;
		}
		
	}
	cout << sum << endl;
	cout << max << endl; 
	
	return 0;
}
