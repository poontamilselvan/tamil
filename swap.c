#include<stdio.h>
#include<conio.h>
int swap(int*a ,int *b);
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("swaped values are %d%d",a,b);
    swap(&a,&b);
    printf("swaped values are%d%d",a,b);
}

    int swap(int*x, int*y)
    {
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;
    
}
