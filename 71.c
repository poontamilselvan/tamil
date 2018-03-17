#include<stdio.h>

int main()
{
   char a[10],c[10];
   int i,j,n=3,flag=0,x=0;
   for(i=0;i<=n;i++)
   {
   scanf("%s",&a[i]);
   }
   for(j=n;j>=0;j--)
   {
       c[x]=a[j];
       x++;
   }
   for(i=0;i<=n;i++)
   {
if(a[i]==c[i])
   flag=0;
   else
   {
   flag=1;
   break;
   }
   }
   if(flag==0)
   
       printf("palindrome");
   
   else
   
       printf("not");
       
}
   
