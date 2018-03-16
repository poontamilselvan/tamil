#include <stdio.h>

int main()
{
    int a[10];int n,i,flag;
    scanf("%d",&a[i]);
    printf("length");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            if(a[i]==1||a[i]==0)
            {
                    flag=1;
            }
            else
            {
                    flag=0;
                    break;
            }
    }
    if(flag==0)
    {
    printf("yes");
    }
    else
    {
            printf("no");
    }
    return 0;
}
