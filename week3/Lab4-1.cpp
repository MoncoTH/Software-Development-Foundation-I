/* LANG : C++ */
#include <iostream>
using namespace std;

int main(){
	int cash,price,change,num;

cin >> cash;
cin >> price; 

change=cash-price; 

    if(change >= 500){	
		num=change/500;
		cout << "500 " << num << endl;
        change = change % 500;
    }
      
    if(change >= 100){
        num=change/100;
		cout << "100 " << num << endl;
        change = change % 100;
    }
      
    if(change >= 1){
        num=change;
		cout << "1 " << num << endl; 
    }

return 0;	
}
