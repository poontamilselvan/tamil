#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b[100],i,flag=0;
    printf("enter the number you want");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
    printf("enter the range");
    scanf("%d",&b[i]);
    }
    for(i=1;i<=10;i++)
    {
    if(a==b[i])
    /*printf("it is on the range");*/flag=1;
    else
    {
       /* printf("it is out of range");*/flag=0;
       
    }}
    if(flag==1)
    {
        printf("it is on the range");
    }
    else
    {
        printf("it is out of range");
    }
}
