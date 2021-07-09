// power function
#include<stdio.h>
#include<stdlib.h>

int power(int m, int n)
{
    if(n==0)
        return 1;
    return power(m, n-1)*m;
}

int main()
{
    int r = power(5,9);
    printf("%d", r);

    return 0;
}