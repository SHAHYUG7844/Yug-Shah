#include <stdio.h>
int main()
{
    int height, base, area=0;
    printf("height");
    scanf("%d", &height);
    printf("base");
    scanf("%d", &base);
    area = (height*base)/2;
    printf("%d",area);
    return 0;
}