#include<stdio.h>
    int main()
    {
        int n=1, a;
        scanf("%d", &a);
        while (n<=a)
        {
         printf("%d ",n);
         n++;
        }

        printf("\nDo-while\n");
        n=1;
        do {
            printf("%d ",n);
            n++;
        }
        while(n<=10);
        

        return 0;
    }