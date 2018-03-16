#include <stdio.h>
#include<string.h>

int main()
{
   int i,c,g;
   printf("enter the number\n");
   scanf("%d",&i);
   scanf("%d",&c);
   g=i+c;
   if(g%2==0)
   printf("even");
   else
   printf("odd");
   return 0;
}
