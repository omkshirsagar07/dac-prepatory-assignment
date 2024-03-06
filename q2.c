#include<stdio.h>
int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter Number for factorial");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    return 0;
}

