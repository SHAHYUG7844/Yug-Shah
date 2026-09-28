#include<stdio.h>

int main(){
     
     int a,b; 
     char ch ;
          scanf("%d %d",&a,&b);
          printf("enter your operater +,-,*,/");
          scanf(" %c",&ch);

          if (ch == '+')
     {
               printf("%d", a+b);
     }
          else if(ch =='-')
          {
               printf("%d", a-b);
          
          }
          else if( ch == '*')
     {
               printf("%d", a*b);
     }
          
          else if ( ch == '/')
          {
               printf("%d", a/b);
          }

     

     




      return 0; 

}