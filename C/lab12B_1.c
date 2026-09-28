#include<stdio.h>
int main()
{
    int i,j,n,sum,total=0;
    printf("enter value of i : ");
    scanf("%d",&i);

    for ( j = 1; j <= i ; j++)
    {
        sum=0;

        for ( n = 1; n <= j; n++)
        {
            sum = sum + n;
        }
        total= total+ sum ;
        
    }
    printf("sum of the series = %d", total);
     


    return 0;
    


}
































