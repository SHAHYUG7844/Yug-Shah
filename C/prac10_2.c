#include<stdio.h>
int main(){
    int n,a,i=1,sum=0;
    printf("enter total no.of values:");
    scanf("%d",&n);
    
    while(i<=n){
        printf("enter value of a:");
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    printf("sum is =%d",sum);
    float avg;
    avg=sum/n;
    printf("\n average is =%f",avg);
    return 0;
}