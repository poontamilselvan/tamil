#include<stdio.h>

int main()
{
    int a[10],i,c;
    for(i=0;i<=1;i++)
    {
        scanf("%d",&a[i]);
    }
    if((a[0]-a[1])%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    
    return 0;
}
