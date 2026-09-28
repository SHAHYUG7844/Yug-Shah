#include <stdio.h>

int main()
{
    int height[5], weight[5];
    int i, count = 0;

    printf("Enter height and weight of 5 persons:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Person %d height: ", i + 1);
        scanf("%d", &height[i]);

        printf("Person %d weight: ", i + 1);
        scanf("%d", &weight[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(height[i] > 170 && weight[i] < 50)
        {
            count++;
        }
    }

    printf("\nNumber of persons having height greater than 170");
    printf(" and weight less than 50 = %d", count);

    return 0;
}