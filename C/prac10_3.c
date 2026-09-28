#include <stdio.h>

int main()
{
    int n, i = 2, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n / 2)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
        i++;
    }

    if (n > 1 && count == 0)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}