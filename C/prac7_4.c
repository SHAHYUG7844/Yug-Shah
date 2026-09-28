#include<stdio.h>
int main()
{
    int a,b,c,Lar;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    printf(" Enter c");
    scanf("%d", &c);
    Lar = (a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
    printf("Largest Number is :");
    printf("%d", Lar );
    return 0;





}