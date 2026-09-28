#include<stdio.h>
    int main()
    {
      int i =1;
      while(i<=10){
        if(i%2!=0)
        {
            printf("%d ",i);
        }
        i++;
      }
      printf("\n Do-while\n");
      i=1;
      do
      {
        if(i%2==1) {
            printf("%d ",i);
        }
        i++;
      } while (i<=20);

      return 0;
    }