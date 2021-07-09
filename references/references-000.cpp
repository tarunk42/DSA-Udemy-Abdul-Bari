#include<iostream>

using namespace std;



int main(){
    
    int a = 10;
    int &r = a; // must be initialized during declaration
    // r = 25;     // this will change value of both r and a. Also this is an assignment not an initialization
    int b = 30;
    r = b;         // this doesn't mean that r has been reassigned to b the r has been fed a new value and both the value of r and a will be affected
    cout<<a<<endl<<r<<endl;

    return 0;
}