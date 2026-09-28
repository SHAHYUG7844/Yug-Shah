#include <stdio.h>

int main()
{
    int a[3][3],i,j;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 9 elements of the matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);

            if(a[i][j] > 0)
                positive++;
            else if(a[i][j] < 0)
                negative++;
            else
                zero++;
        }
    }

    printf("Positive elements = %d", positive);
    printf("\nNegative elements = %d", negative);
    printf("\nZero elements = %d", zero);

    return 0;
}