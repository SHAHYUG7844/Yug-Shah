#include<stdio.h>
int main()
{
    int intrest,principal,roi,timeperiod;
    printf("principal");
    scanf("%d", &principal);
    printf("roi");
    scanf("%d", &roi);
    printf("timeperiod");
    scanf("%d",&timeperiod);
    intrest = (principal*roi*timeperiod)/100;
    printf("%d",intrest);
    return 0;
}