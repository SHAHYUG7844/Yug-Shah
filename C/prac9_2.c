#include<stdio.h>
    int main()
{
        int n,i=0,tab;
        printf("Which number of table you want :");
        scanf("%d",&n);

        while (i<=10)
        {
            tab=n*i;
            printf("%d x %d = %d\n",n,i,tab);
            i++;
        }
        return 0;
        




}