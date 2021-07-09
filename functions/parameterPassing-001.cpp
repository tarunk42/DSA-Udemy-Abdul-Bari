#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

// CALL BY REFERENCE

// Only in C++

void swap(int &x, int &y)
{
    // swap function may become inline function but that depends on the compiler. It is not mandatory.
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int num1 = 10, num2 = 15;

    swap(num1, num2);

    cout<<"First Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl;

    return 0;
}
