#include<stdio.h>
int main()
{
float e=1,fact,i,j,n;
 printf("enter n : ");
 scanf("%f",&n);
     for ( i = 1; i <= n ; i++)
     { 
        fact=1;
        for ( j = 1; j <=i ; j++)
        {
            fact=fact*j;
        }
        e=e+(1.0/fact);
     }
     printf("%f",e);
     return 0;
}























