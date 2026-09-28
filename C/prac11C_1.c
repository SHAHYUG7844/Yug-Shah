#include <stdio.h>
#include<math.h>

int main()
{
    int n, first, last, digits = 0, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

   
    for (temp = n; temp != 0; temp = temp / 10)
    {
        digits++;
    }

 
    temp = n;
    for (int i = 1; i < digits; i++)
    {
        temp = temp / 10;
    }
    first = temp;

   
    result = n % 1;
    temp = n;

    
    int middle = (n % (int)pow(10, digits - 1)) / 10;

    result = last * pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}