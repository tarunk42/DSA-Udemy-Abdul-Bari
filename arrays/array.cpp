#include<iostream>

using namespace std;

int main(){
    
    int A[10] = {2,4,6,8,10};
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);
    cout<<A[6]<<endl;

    return 0;
}