#include <stdio.h>
void main()
{
    int p = 0, ne = 0, i, n;
    printf("Enter Array Size : ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            p++;
        }
        else if (arr[i]%2!=0)
        {
            ne++;
        }
        
        
    }
    printf("there is/are %d even \n", p);
    printf("there is/are %d odd ", ne);
}