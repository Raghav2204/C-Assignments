#include<stdio.h>
#include<string.h>
int main()
{
   char a[10] = "raghav";
   char b[10] = "satyam";
   char c[50];
   printf("a = %s\n",a);
   printf("b = %s\n",b);
   printf("Length of string a = %d\n",strlen(a));
   printf("Copying string a in c %s\n",strcpy(c,a));
   printf("Difference between string a and b = %d\n",strcmp(a,b));
   printf("Uppercase = %s\n",strupr(a));
   printf("Concatenation = %s\n",strcat(a,c));
   printf("Reversed string = %s\n",strrev(c));
}
