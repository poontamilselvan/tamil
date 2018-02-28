#include<stdio.h>
void main()
{
    int a[10];
    int i,b,n,k=0;
    float d;
    printf("enter the number");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
       k=k+a[i];
    }
    printf("%d",k);
    d=k/n;
    printf("%f",d);
    
    }
