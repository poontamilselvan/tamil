#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[20];
    int c,d;
    printf("enter the 1st word");
    scanf("%s",&a);
    
    printf("enter the 2nd word");
    scanf("%s",&b);
    c=strlen(a);
    printf("%d\n",c);
    d=strlen(b);
    printf("%d\n",d);
    if(c>d)
    {
        printf("%s\n",a);
        
    }
    else
     printf("%s\n",b);
}
