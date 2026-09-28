#include <stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Enter no.");
    scanf("%d %d", &a, &b);
    printf("Select Operation");
    scanf(" %c", &ch);
    
        switch (ch)
        {

        case '+':
            printf("result = %d", a + b);
            break;

        case '-':
            printf("result = %d", a - b);
            break;

        case '/':
            printf("result = %d", a / b);
            break;

        case '*':
            printf("result = %d", a * b);
            break;

        default:
            printf("Invalid Operations");
            break;
        }
    
    return 0;
}
