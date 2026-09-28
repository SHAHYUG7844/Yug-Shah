#include <stdio.h>

int main()
{
    int n, count;
    int f0 = 0, f1 = 0, f2 = 0, f3 = 0, f4 = 0;
    int f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        f0++;

    for (; n > 0; n = n / 10)
    {
        count = n % 10;

        switch (count)
        {
            case 0: f0++; break;
            case 1: f1++; break;
            case 2: f2++; break;
            case 3: f3++; break;
            case 4: f4++; break;
            case 5: f5++; break;
            case 6: f6++; break;
            case 7: f7++; break;
            case 8: f8++; break;
            case 9: f9++; break;
        }
    }

    printf("\nFrequency of digits:\n");
    printf("0 = %d\n", f0);
    printf("1 = %d\n", f1);
    printf("2 = %d\n", f2);
    printf("3 = %d\n", f3);
    printf("4 = %d\n", f4);
    printf("5 = %d\n", f5);
    printf("6 = %d\n", f6);
    printf("7 = %d\n", f7);
    printf("8 = %d\n", f8);
    printf("9 = %d\n", f9);

    return 0;
}