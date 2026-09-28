#include<stdio.h>
int main()
{
    int i = 1, n, product=0;
    printf("Enter number : ");
    scanf("%d ", &n);

    while (i <= n)
    {
        if (i % 2 == 0)

        {
            product = product - i;
        }
        else
        {
            product = product + i;
        }
        i++;
    }
    printf("%d", product);
    return 0;
}