#include<iostream>

using namespace std;

int main(){
    int a = 10;     //data variable
    int *p;         //address variable // declaration
    p = &a;         //intialization

    cout<<a<<endl;
    printf("value of a using pointer: %d\n", *p);
    printf("the pointer is having the address: %d\n", p);
    printf("adderess of a: %d", &a);

    return 0;
}