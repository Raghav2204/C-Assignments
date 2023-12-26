#include <stdio.h>
int main ()
{
   int a,c;
   int dv;
   printf("Enter the divisibility test");
   scanf("%d\n",&dv);
   printf("Enter a number");
   scanf("%d\n",&a);
   if(dv == 3)
   {
      if((a%3)==0)
      printf("Number entered is divisible by 3");
      else
      printf("number entered is not divisible by 3");
   }
   if(dv == 5)
   {
      if(a%5==0)
      printf("number entered is divisible by 5");
      else
      printf("number entered is not divisible by 5");
   }
   return 0 ;
}
