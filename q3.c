#include<stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("Enter the value of n :/n ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int next = 0;
    int a = 0;
    int b = 1;
    
    for(int i =0;i<=n;i++)
    {
        if(i>2)
        {
            next = a+b;
            b=next;
            a=b;
            printf(" %d",next);

        }
       else if(i==2)
        {
            printf(" %d",b);
        }
        else  if(i==1)
        {
            printf(" %d",a);
        }
    }

}