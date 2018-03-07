#include<stdio.h>
void main()
{ 
  char ch;
  printf("enter the word");
  scanf("%c",&ch);
  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
       printf("it contains");
  else
   {
         printf("no");
 }  
 }
 
