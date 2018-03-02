#include<stdio.h>
#include<conio.h>
void main()
{
    int a=1,n,i=1,flag;
    printf("enter the value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    a=a*2;
    if(a==n)
    {
    flag=1;
    break;
    }
    }
    if(flag=1)
    {
    
        printf("it is power of 2");
    }
    else
    {
        printf("it is not power of 2");
}
    
}
