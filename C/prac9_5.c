#include<stdio.h>
int main()
{
    int n,i,factor;
    printf("Enter number : ");
    scanf("%d",&n);

    while (i<=n)
    {
       if (n%i==0)
    {
       printf(" %d\t ",i);
       
    }
    i++;
       
        
    }
    return 0;
}