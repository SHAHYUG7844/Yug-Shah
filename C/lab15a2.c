#include <stdio.h>

int main()
{
    int a[10], i, count = 0;

    printf("Enter 10 elements:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);

        if(a[i] < 0)
        {
            count++;
        }
    }

    printf("Total number of negative elements = %d", count);

    return 0;
}