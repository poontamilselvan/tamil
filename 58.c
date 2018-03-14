#include<stdio.h>
#include<conio.h>
int main()
{
        int a=32,b=65;
        int temp;
        a=a^b;
        b=a^b;
        a=a^b;
        printf("%d %d",a,b);
        return 0;
}
