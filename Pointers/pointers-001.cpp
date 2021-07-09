#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    
    //pointer to an array

    int A[5] = {2,4,6,8,10};
    int *p;
    p = A;  // dont need to give & while intializing a pointer to an array

    for(int i=0;i<5;i++){
        printf("%d\n",A[i]);
        printf("Using pointer: %d\n", p[i]);
    };

    // cout<<"array is created in heap using c method."<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<p[i]<<endl;
    // };
    free(p);
    // int *s;                     // it is inside the stack
    // s=(int *)malloc(5*sizeof(int));     // this is in the heap.

    // s[0]=10; s[1]=15; s[2]=14; s[3]=21; s[4]=31;


    int *r;
    r=new int[5];
    r[0]=12;r[1]=15;r[2]=20;r[3]=24;r[4]=33;
    
    cout<<"array is created in heap using c++ method"<<endl;
    for(int j=0;j<5;j++){
        cout<<r[j]<<endl;
    };

    delete [ ] r; 
    return 0;
}