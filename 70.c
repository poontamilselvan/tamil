#include<stdio.h>

int main()
{
    int a,c,i,n=1;
    printf("enter the value");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(n<=a)
        {
           n=n*2; 
          
        }
        
    }
    printf("%d",n);
}
