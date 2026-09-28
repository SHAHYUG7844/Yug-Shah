#include <stdio.h>
int main()
{

    {
        int x, y, i;
        int result = 1;

        printf("Enter the value of x: ");
        scanf("%d", &x);

        printf("Enter the value of y: ");
        scanf("%d", &y);

        for (i = 1; i <= y; i++)
        {
            result = result * x;
        }

        printf("%d^%d = %d", x, y, result);

        return 0;
    }
}