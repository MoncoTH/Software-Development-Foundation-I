/* LANG : C++ */
#include <iostream>

using namespace std;
 int main(void) {
 
 int n,i,k; 
 
 cin >> n;
  
 for(i = 1; i <= n; i++){
  	
  	k=i%2;
  	
  	switch(k){ 
  	 case 1: cout << "0";
  	 break;
  	 case 0: cout << "1";
  	 break;
	  } 
}


  
 return 0;
}
