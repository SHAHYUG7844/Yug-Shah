#include <stdio.h>
int main()
{

    float a, b, c, d, e, per;
    printf("enter the marks of subject a:");
    scanf("%f", &a);
    printf("enter the marks of subject b:");
    scanf("%f", &b);
    printf("enter the marks of subject c:");
    scanf("%f", &c);
    printf("enter the marks of subject d:");
    scanf("%f", &d);
    printf("enter the marks of subject e:");
    scanf("%f", &e);

    per = (a + b + c + d + e) / 500 * 100;
    if (per >= 71)
    {
        printf("distinction");
    }
    else if (per >= 61 && per <= 70)
    {
        printf("first class");
    }
     else if (per >= 46 && per <= 60)
    {
        printf("second class");
    }
     else if (per >= 36 && per <= 45)
    {
        printf("pass class");
    }
    else if (per < 35)
    {
        printf("fail");
    }
    return 0;
    
}