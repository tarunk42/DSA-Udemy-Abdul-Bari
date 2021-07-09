#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

// CALL BY ADDRESS

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}   // Since it is not modifying the actual parameters so they do not need to return anything.

int main()
{
    int num1 = 10, num2 = 15;

    swap(&num1, &num2);

    cout<<"First Number "<<num1<<endl;
    cout<<"Second Number "<<num2<<endl;

    return 0;
}
