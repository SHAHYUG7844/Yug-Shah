#include<stdio.h>
void main()
{
    int a[100],i;
    for(i=0;i<=99;i++)
    {
        if(i%2==0)
        {
            printf("%d Number is even",i);
        }
        else{
             printf("%d Number is odd",i);
        }
        printf("\n");
    }
}