#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int * fun(int size)
{
    int *p;                     // creating an array pointer
    p = new int [size];         // creating an array
    for(int i=0;i<size;i++)     
    p[i]=i+1;

    return p;                   // returning a pointer of type array
};



int main()                      // main is not creating any array
{
    int *ptr, sz = 7;

    ptr = fun(sz);

    for(int i=0;i<sz;i++)
    cout<<ptr[i]<<endl;

    return 0;
}
