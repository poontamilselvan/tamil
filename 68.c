#include<stdio.h>

int main()
{
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    if((a%7)==0)
    {
        printf("it is multiple of 7");
    }
    else
    {
        printf("not multiple of 7");
    }
    return 0;
}
