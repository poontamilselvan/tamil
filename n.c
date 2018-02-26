#include<stdio.h>

void main()
{
    int a,c,count;
    printf("enter the number");
    scanf("%d",&a);
    do{
    c=a%10;
    
     if((c<=9)&&(c>=0))
    {
        count++;
    }
    a=a/10;
    }
    while(c!=0);
    printf("%d",count-1);
    
    
}
