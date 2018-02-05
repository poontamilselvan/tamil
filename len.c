#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
  {
    char a[10]="logan";int b,q=0;int i;
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
       if(isalpha(a[i]))
       q++;
    }
    printf("%d",q);
    
  }
