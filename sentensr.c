#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
  {
    char a[100000]="hugh tamil wolveriv logan victor @ gmail .            yhh yhhh      yh          tyhtn           tyjtye       hfh yh h hfghgfhfgh hfgh h bnfgn f fd vbfghgffgg hgfh hdfghdfhfdgh hghgfh ghgghgb hfghfg gfghh fgf gcfgb  hgghg hgghgh gghg ghgh y hy yjh  gbg ggg g hghg gghg gfg ghghg ghgh hj jyju fff yyh trg ghgb  huih iuuh  uh hu  ojojpok ui  uojiji gv ui h u hhhuh uhuhh uhuh tvt yi j i j ij j   g y u  h  i hi h o     oh o ho io  o  o o o  o ho hh  y yu g   g g y yu y       g u u  u uy  uy h h hu u bu b    u bu bu b u u b u b ub uy ub yb u b u  ub u ub ub  i   jo j jjio oio ji ohuh uh iu  huhiu hiu       ";int b,q=0;int i;
    b=strlen(a);
    for(i=0;i<=b;i++)
    {
       if(isalpha(a[i]))
       q++;
    }
    printf("%d",q);
    
