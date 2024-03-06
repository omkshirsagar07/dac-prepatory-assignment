#include<stdio.h>
#include<stdlib.h>


int main(int argc,char *argv[])
{
    
    int sum =0;
    int max=0;
    for(int i=1;i<argc;i++)
        if(atoi(argv[i])>max)
        {
            max = atoi(argv[i]);
        }
        
    printf("\n Maximum no is = %d",max);
    return 0;
}
