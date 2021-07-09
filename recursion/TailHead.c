#include<stdio.h>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);           //Head recursion
        printf("%d ", n);
        // fun(n-1);           // Tail function
    }
}

int main()
{
    int x = 3;

    fun(x);
    return 0;
}