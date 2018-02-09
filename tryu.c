#include<stdio.h>
#include<conio.h>
int main()
{
    char a[120]="143453425325 5656325626";
    int i,t;
    for(i=0;i<=120;i++)
    if(isspace(a[i]))
    {
        t++;
    }
    printf("%d",t);
}
