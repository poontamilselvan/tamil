#include <stdio.h>
int main(void) 
{
int n,r,a[100],i,v;
printf("enter the value");
scanf("%d",&n);
while (n!=0)
{
v=n%10;
a[i]=v;
n=n/10;
i++;
}
for(r=i-1;r>=0;r--)
{
    printf("%d\t",a[r]);
}
}


