#include<stdio.h>
int main()
{
   int arr[5][2],i ,j;
   for ( i = 0; i < 5; i++)
   {
   scanf("%d %d",&arr[i][0],&arr[i][1]);
   }

   for ( i = 0; i < 5; i++)
   {
   printf("%d %d ",arr[i][0],arr[i][1]);
   printf("\n");
   }

   return 0;
}