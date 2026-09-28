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
        if (arr[i] > 0)
        {
            p++;
        }
        else
        {
            ne++;
        }
    }
    printf("There are %d possitive numbers\n", p);
    printf("There are %d negative numbers", ne);
}