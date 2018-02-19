#include<stdio.h>
void main()
{
     int a[10];
     int i;
     int l;
     printf("enter the number");
     for(i=0;i<=10;i++)
     scanf("%d\n",&a[i]);
     l=a[0];
     for(i=0;i<=10;i++)
     {
         if(a[i]>l)
         {
         l=a[i];
         
         }
        
     }
     
     printf("the greatest is%d",l);
}
