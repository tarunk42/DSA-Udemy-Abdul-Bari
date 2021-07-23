#include<stdio.h>

int f(int n)
{
    static int i=1;
    if(n>=5)
        return n;
    n = n+i;
    i++;
    printf("%d, %d\n",n, i);
    return f(n);
}

int main()
{
    printf("%d",f(1));
    return 0;
}