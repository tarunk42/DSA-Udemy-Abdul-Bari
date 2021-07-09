#include<stdio.h>
#include<iostream>

struct Rectangle{
        int length;
        int breadth;
};

struct complex{
    int real;                       // 2 bytes
    int img;                        // 2 bytes
};                                  // 4 bytes - total

struct student{
    int roll;                       // 2  bytes
    char name[25];                  // 25 bytes
    char dept[10];                  // 10 bytes
    char address[50];               // 50 bytes
};                                  // 77 bytes - total

struct card{
    int face;
    int shape;
    int color;
};

int main() {
    struct Rectangle r; // Just declaration
    // struct Rectangle_r r={10,5}; // Declaration and initialization

    r.length = 5;
    r.breadth = 10;

    struct student s;
    s.roll = 10;
    // s.name = "John";

    struct card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;

    struct card deck[52]{
        {1,0,0}, {2,0,0}, {1,1,0}, {2,1,0}
    };


    printf("Area of Reactangle is %d.\n", r.length*r.breadth);
    printf("face: %d\n", deck[0].face);
    printf("shape: %d", deck[0].shape);

};