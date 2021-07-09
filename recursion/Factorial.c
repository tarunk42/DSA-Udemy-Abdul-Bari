// factorial of a number using recursion
#include<stdio.h>
#include<stdlib.h>

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return factorial(n-1)*n;
}

int main()
{
    int x = 100;
    printf("%d", factorial(x));

    return 0;
}