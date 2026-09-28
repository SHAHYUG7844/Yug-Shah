#include<stdio.h>
int main()
{
    int x,y,power=1,i=1;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);

    while (i<=y)
    {
        power=power*x;
        i++;
    }
    printf("answer = %d",power);
    return 0;
}