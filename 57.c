#include<stdio.h>
#include<conio.h>
int main()
{
        int a=32,b=65;
        int temp;
        temp=a;
        a=b;
        b=temp;
        printf("%d %d",a,b);
        return 0;
}
