#include<stdio.h>
#include<conio.h>
int main()
{
        int a=1,b=1,n,i,sum,u;
        printf("nvalue");
        scanf("%d",&n);
        printf("%d%d",a,b);
        
        
        u=n-2;
        for(i=1;i<=u;i++)
        {
                sum=a+b;
                printf("%d",sum);
                a=b;
                b=sum;
                
        }
        
        
        
        
    return 0;
}
