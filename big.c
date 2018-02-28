#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],temp=0;
    int i,j;
    printf("enter the values");
    for(i=1;i<=10;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=10;i++)
    {
    for(j=i+1;i<=10;i++)
      {
          if(a[i]<=a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
    }
    }
   
    printf("%d\n",a[10]);
    printf("%d\n",a[1]);
}
