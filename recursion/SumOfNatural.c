// sum of first n natural numbers using recursion
#include<stdio.h>
#include<stdlib.h>

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    int x = 100;
    printf("%d", sum(x));

    return 0;
}