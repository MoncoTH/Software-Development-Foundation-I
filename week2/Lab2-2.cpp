/* LANG : C++ */
#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
    float r,sqArea,crArea,area;
    const float Pi=3.143;
    cin >> r;
    
	crArea=Pi*(r*r);
    sqArea=(r*2)*(r*2);
    area=sqArea-crArea;
    cout << "Area: " << setprecision(3) << area;

    return 0;
}
