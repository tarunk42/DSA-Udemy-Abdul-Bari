#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    // struct Rectangle r = {10, 5};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;
    // Rectangle *p=&r;
    // cout<<p->length<<endl;
    // cout<<p->breadth<<endl;
    
    // pointer to a dynamic structure
    // initialize a structure object with pointer p
    // For c lang
    // struct Rectangle *p;
    //for c++
    Rectangle *p;
    // use malloc to dynamically allocate heap memory and typecasted to rectangle type == FOR C LANG
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // for C++ just use new
    // p = new Rectangle;

    // assigning member values using pointer
    p->length=15;
    p->breadth=7;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    

    return 0;
}
